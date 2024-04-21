#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

struct Task
{
  string title;
  string description;
  bool completed;
};

void displaymenu(){
    cout<<"==============TASK MANAGEMENT ================ \n\n";
    cout<<"1)Add Task\n";
    cout<<"2)View Task\n";
    cout<<"3)Mark Task as completed\n";
    cout<<"4)Delete Task\n";
    cout<<"5)Save and Exit\n";
}

void addtask(vector<Task> &task){
    Task newtask;
    cout<<"\nEnter Title of Task\n ";
    cin.ignore();
    getline(cin ,newtask.title);
    cout<<"\nEnter Description\n";
    getline(cin,newtask.description);
    newtask.completed =false;
    task.push_back(newtask);
    cout<<"\nTask Added Successfully\n";
}

void viewtask(const vector<Task> &task){
    if (task.empty())
    {
        cout<<"\nNo task yet added\n";
        return ;
    }
    else{
        cout<<"\nTask lists\n";
        for (size_t i = 0; i < task.size(); i++)
        {
            cout<<"Task "<<i+1<<":\n";
            cout<<"--->";
            cout<<"Title : "<<task[i].title<<endl;
            cout<<"--->";
            cout<<"Description : "<<task[i].description<<endl;
            cout<<"--->";
            cout<<"Status : "<<(task[i].completed ? "Completed" : "Incompleted")<<"\n\n";
        }
    }
}

void marktaskcompleted(vector<Task> &task){
    viewtask(task);
    if (task.empty())
    {
        cout<<"\nNO Task are there \n";
    }
    size_t index;
    cout<<"Enter the number to mark as completed \n";
    cin>>index;
    if (index >=1 && index <=task.size())
    {
        task[index-1].completed = true;
        cout<<"\nTask marked as completed\n";
    }
    else{
        cout<<"\nInvalid Task Number \n";
    }
}

void deletetask(vector<Task> &task){
    viewtask(task);

    if (task.empty())
    {
        cout<<"\n NO Task are there \n";
        return;
    }

    size_t index;
    if (index>=1 &&index <=task.size())
    {
        task.erase(task.begin() + index-1);
        cout<<"\nTask deleted\n";
    }
    else{
        cout<<"\nInvalid Task Number\n";
    }
}

void save(const vector<Task> &task){
    ofstream outFile("task.txt");
    if (!outFile)
    {
        cerr<<"\nError : Unable to open File\n";
        return;
    }
    for(const auto &task: task){
        outFile<<task.title<<"\n";
        outFile<<task.description<<"\n";
        outFile<<task.completed<<"\n";
    }
    outFile.close();
    cout<<"\nTask Saved to files \n";
}

void loadTasksFromFile(vector<Task> &tasks) {
    ifstream inFile("tasks.txt");

    if (!inFile) {
        cout << "\nNo existing tasks file found.\n";
        return;
    }

    Task task;
    while (getline(inFile, task.title) && getline(inFile, task.description) && inFile >> task.completed) {
        tasks.push_back(task);
    }

    inFile.close();
    cout<<"----------------\n";
    cout << "\nTasks loaded from file.\n";
}

int main(){
    vector<Task> task;
    loadTasksFromFile(task);
    char choice;
    do
    {
        displaymenu();
        cout<<"----------------";
        cout<<"\nEnter Your choice \n";
        cout<<"----------------\n";
        cin>>choice;

        switch (choice)
        {
        case '1':addtask(task);
            break;
        case '2':viewtask(task);
            break;
        case '3':marktaskcompleted(task);
            break;
        case '4':deletetask(task);
            break;
        case '5':save(task);
        cout<<"Exiting Program\n";
            break;
        default:cout<<"Invalid Choice\n";
            break;
        }
    } while (choice !='5');
    return 0;
}