 #include<iostream>
 #include<string>
 #include<fstream>
using namespace std;
class Task{
    public:
    int id;
    string startdate;
    string enddate;
    string description;
    void displayTask()
    {
        cout<<"ID:"<<id<<endl;
         cout<<"Startdate:"<<startdate<<endl;
          cout<<"Enddate:"<<enddate<<endl;
         cout<<"Description:"<<description<<endl;
}
};
class TaskManager{
    private:
    Task tasks[100];
    int taskcount=0;
    public:
    void createTask(){
        tasks[taskcount].id=taskcount+1;
        cout<<"enter the start date:";
        cin>>tasks[taskcount].startdate;
        cout<<"enter the end date:";
        cin>>tasks[taskcount].enddate;
        cout<<"enter the description:";
        cin>>tasks[taskcount].description;
        taskcount++;
    }
    void displayTask()
    {
        for(int i=0;i<taskcount;i++)
        {
            tasks[i].displayTask();
        }
    }
    void saveTasks()
    {
        ofstream MyFile("C:\\parvam\\anu r.txt");
        if(MyFile.is_open())
        {
            for(int i=0;i<taskcount;i++)
            {
                MyFile<<tasks[i].id<<","<<tasks[i].startdate<<","<<tasks[i].enddate<<","<<tasks[i].description<<endl;
            }
            MyFile.close();
            cout<<"tasks saved"<<endl;
        }
    }
    void  loadTask()
    {
        ifstream MyFile('C:\\parvam\\anu r.txt')
    }
};
int main()
{
    TaskManager tm;
    int choice;
    while(true)
    {
        cout<<"1. create task, 2.display tasks,3.exit "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            tm.createTask();
            break;
            case 2:
            tm.displayTask();
            break;
            case 3:
            return 0;
            default:
            cout<<"invalid choice"<<endl;
        }
    }
    return 0;
}