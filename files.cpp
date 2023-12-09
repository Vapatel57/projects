#include<iostream>
#include<set>
#include<fstream>

using namespace std;

void commentoutcommonlines(const string&file1,const string&file2,const string&outputfile){
    ifstream inFile1(file1);
    ifstream inFile2(file2);
    ofstream outFile(outputfile);

    if (!inFile1.is_open() || !inFile2.is_open() || !outFile.is_open())
    {
        cerr<<"Error"<<endl;
        return ;
    }
    set<string>linesset;
    string line;

    while (getline(inFile1,line))
    {
        linesset.insert(line);
    }
    while (getline(inFile2,line))
    {
        if (linesset.find(line) !=linesset.end())
        {
            outFile<<"//"<<line<<endl;
        }
        else{
            outFile<<line<<endl;
        }
    }

    cout<<"Common : "<<outputfile<<endl;

    inFile1.close();
    inFile2.close();
    outFile.close();    
    
}
int main(){
    string file1 = "file1.txt";
    string file2 = "file2.txt";
    string outputFile ="output.txt";

    commentoutcommonlines(file1,file2,outputFile);

    return 0;

}
