#include <stdio.h>
#include <windows.h>

bool CreateChildProcess(TCHAR* szChildProcessName, TCHAR* szCommandline) {

	SECURITY_ATTRIBUTES sa;

	STARTUPINFO si;//IN 给你的子进程赋属性 一般全为空
	PROCESS_INFORMATION pi;//OUT 创建进程成功后，返回的子进程标识
	//#define RtlZeroMemory(Destination,Length) memset((Destination),0,(Length))
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	if (!CreateProcess(
		szChildProcessName, //对象名称
		szCommandline,		//命令行参数
		NULL,				//不继承进程句柄
		NULL,				//不继承线程句柄
		FALSE,				//不继承句柄
		0,				//没有创建标志
		NULL,			//使用父进程环境变量
		NULL,			//使用父进程目录作为当前目录，可以自己设置目录
		&si,			//caller 填写的信息
		&pi				//out 创建的子进程的信息
	))
	{
		printf("Last error:%d \n", GetLastError());
	}
	//打印子进程的相关信息
	printf("进程句柄:%d ,线程句柄:%x  进程ID:%x，线程ID:%x", pi.hProcess, pi.hThread, pi.dwProcessId, pi.dwThreadId);

	//通过子进程句柄对子进程控制
	//SuspendThread(pi.hThread);//线程假死(僵尸状态？)
	//ResumeThread(pi.hThread);//复活线程


	//释放子进程句柄
	CloseHandle(pi.hProcess);  //对于线程的CloseHandle，不仅线程内核对象的计数器 == 0 ，并且关闭线程(线程关了进程才能关)才能真正
	CloseHandle(pi.hThread);	//消除线程内核对象
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
