#include <stdio.h>
#include <windows.h>

bool CreateChildProcess(TCHAR* szChildProcessName, TCHAR* szCommandline) {

	SECURITY_ATTRIBUTES sa;

	STARTUPINFO si;//IN ������ӽ��̸����� һ��ȫΪ��
	PROCESS_INFORMATION pi;//OUT �������̳ɹ��󣬷��ص��ӽ��̱�ʶ
	//#define RtlZeroMemory(Destination,Length) memset((Destination),0,(Length))
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	if (!CreateProcess(
		szChildProcessName, //��������
		szCommandline,		//�����в���
		NULL,				//���̳н��̾��
		NULL,				//���̳��߳̾��
		FALSE,				//���̳о��
		0,				//û�д�����־
		NULL,			//ʹ�ø����̻�������
		NULL,			//ʹ�ø�����Ŀ¼��Ϊ��ǰĿ¼�������Լ�����Ŀ¼
		&si,			//caller ��д����Ϣ
		&pi				//out �������ӽ��̵���Ϣ
	))
	{
		printf("Last error:%d \n", GetLastError());
	}
	//��ӡ�ӽ��̵������Ϣ
	printf("���̾��:%d ,�߳̾��:%x  ����ID:%x���߳�ID:%x", pi.hProcess, pi.hThread, pi.dwProcessId, pi.dwThreadId);

	//ͨ���ӽ��̾�����ӽ��̿���
	//SuspendThread(pi.hThread);//�̼߳���(��ʬ״̬��)
	//ResumeThread(pi.hThread);//�����߳�


	//�ͷ��ӽ��̾��
	CloseHandle(pi.hProcess);  //�����̵߳�CloseHandle�������߳��ں˶���ļ����� == 0 �����ҹر��߳�(�̹߳��˽��̲��ܹ�)��������
	CloseHandle(pi.hThread);	//�����߳��ں˶���
	return TRUE;
	//CreateProcess()

}

int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR szApplicationName[] = TEXT("c://program files//internet explorer//iexplore.exe");
	TCHAR szCommand[] = TEXT("http://www.bing.cn/");
	CreateChildProcess(szApplicationName, szCommand);
	getchar();
	return 0;
}
