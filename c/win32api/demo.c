BOOL CreateChildProcess()
si.cb = sizeof(si);

//创建子进程 返回成功与失败
if(!CreateProcess(
    szChildProcssName,  //对象名称
    szCommandLine,  //命令行
    NULL, //不继承进程句柄
    NULL， //不继承线程句柄
    FALSE， //不继承句柄
    0,  //没有创建标志
    NULL,   //使用父进程环境变量
    NULL，  //使用父进程目录作为当前目录，可以自己设置目录
    &si,    //STRTUPINFOW 结构体详细信息
    &pi,    //PROCESS_INFORMATION结构体信息
    )
)
