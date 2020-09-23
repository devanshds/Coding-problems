#include<bits/stdc++.h>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

int main()
{
    pid_t pid;
    pid=fork();
    if(pid<0)
        cout<<"Fork Failed";
    else if (pid==0)
        execlp("/dir","dir",NULL);
    else
    {
        wait(NULL);
        cout<<"child complete";
    }
        return 0;
}
