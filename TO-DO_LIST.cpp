#include<iostream>
#include<windows.h>
using namespace std;

void print_tasks(string task[], int task_count)
{
    cout<<"---TO-DO LIST---"<<endl;
    cout<<"----------------"<<endl;

    for(int i=0; i<task_count; i++)
    {
        cout<<"Task "<<i+1<<": "<<task[i]<<endl;
    }

    cout<<"----------------"<<endl;
}

int main()
{
    string task[10]={""}; // to store tasks
    int task_count=0;    // to count the number of tasks
    int option=-1;       // to store user choice

    while(option!=0)
    {
        cout<<"---TO-DO LIST---"<<endl;
        cout<<"1. Add New Task"<<endl;
        cout<<"2. To View Tasks"<<endl;
        cout<<"3. To Delete Task"<<endl;
        cout<<"0. Terminate the task"<<endl;

        cout<<"Enter your choice: ";
        cin>>option;

        switch(option)
        {
            case 1:
            {
                if(task_count > 9)
                {
                    cout<<"Task list is full!"<<endl;
                }
                else
                {
                    cout<<"Enter the task: ";
                    cin.ignore();
                    getline(cin, task[task_count]);
                    task_count++;

                    cout<<"Task added successfully!"<<endl;
                }
                break;
            }

            case 2:
            {
                print_tasks(task, task_count);
                break;
            }

            case 3:
            {
                int del_task=0;

                cout<<"Enter the task number to delete: ";
                cin>>del_task;

                if(del_task<=0 || del_task>task_count)
                {
                    cout<<"Invalid task number!"<<endl;
                }
                else
                {
                    for(int i=del_task-1; i<task_count-1; i++)
                    {
                        task[i]=task[i+1];
                    }

                    task_count--;

                    cout<<"Task deleted successfully!"<<endl;
                }

                break;
            }

            case 0:
            {
                cout<<"Program terminated!"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid choice!"<<endl;
            }
        }
    }

    return 0;
}