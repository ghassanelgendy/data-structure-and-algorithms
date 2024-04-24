#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <chrono>
using namespace std;
using namespace std::chrono;
class Student{
    string id ,name;
    double gpa;
public:
    Student(string id="-1",string name="",double gpa=0.0):id(id),name(name),gpa(gpa){}
    bool operator<(const Student &other) const{
        return name<other.name;
    }bool operator<=(const Student &other) const{
        return name<=other.name;
    }bool operator>(const Student &other) const{
        return name>other.name;
    }
    bool operator<(double otherGPA) const {
        return gpa < otherGPA;
    }
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << student.name << "\n" << student.id << "\n" << student.gpa<<'\n';
        return os;
    }
    friend istream& operator>>(istream& is, Student& student) {
        is >> student.name >> student.id >> student.gpa;
        return is;
    }
    string getName() const {
        return name;
    }
    double getGpa() const {
        return gpa;
    }
};
template<class T>
void Selection_Sort(vector<T>&students){
    for(int i=0;i<(int)students.size()-1;i++)
    {
        int minidx=i;
        for(int j=i;j<(int)students.size();j++){
            if(students[j]<students[minidx]) minidx=j;
        }
        swap(students[i],students[minidx]);
    }
}
void Selection_Sort_GPA(vector<Student>&students){
    for(int i=0;i<(int)students.size()-1;i++)
    {
        int minidx=i;
        for(int j=i;j<(int)students.size();j++){
            if(students[minidx].getGpa()>students[j].getGpa()) minidx=j;
        }
        swap(students[i],students[minidx]);
    }
}

template<class T>
void Insertion_Sort(vector<T>&students){
    for(int i=0;i<=(int)students.size()-1;i++)
    {
        int j=i;
        while(j>0&&students[j]<students[j-1]) swap(students[j],students[j-1]),--j;
    }
}
void Insertion_Sort_GPA(vector<Student>&students){
    for(int i=0;i<=(int)students.size()-1;i++)
    {
        int j=i;
        while(j>0&&students[j].getGpa()<students[j-1].getGpa()) swap(students[j],students[j-1]),--j;
    }

}
template<class T>
void Bubble_Sort(vector<T>&students){
    for(int i=(int)students.size()-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(students[j]>students[j+1]) swap(students[j],students[j+1]);
        }
    }
}
void Bubble_Sort_GPA(vector<Student>&students){
    for(int i=(int)students.size()-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(students[j].getGpa()>students[j+1].getGpa()) swap(students[j],students[j+1]);
        }
    }
}

template<class T>
void Shell_Sort(vector<T>&students){
    int n=(int)students.size();
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            T temp = students[i];
            int j;
            for (j = i; j >= gap && students[j - gap] > temp; j -= gap)
                students[j] = students[j - gap];
            students[j] = temp;
        }
    }
}
void Shell_Sort_GPA(vector<Student>&students){
    int n=(int)students.size();
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            auto temp = students[i];
            int j;
            for (j = i; j >= gap && students[j - gap].getGpa() > temp.getGpa(); j -= gap)
                students[j] = students[j - gap];
            students[j] = temp;
        }
    }
}

template<class T>
void Merge(vector<T>&students,int low,int mid,int high){
    vector<T>temp;
    int left=low,right=mid+1;
    while(left<=mid&&right<=high){
        if(students[left]<=students[right]){
            temp.push_back(students[left]);
            ++left;
        }
        else {
            temp.push_back(students[right]);
            ++right;
        }

    }
    while(left<=mid){
        temp.push_back(students[left++]);
    }
    while(right<=high) temp.push_back(students[right++]);
    for(int i=low;i<=high;i++){
        students[i]=temp[i-low];
    }


}


template<class T>
void Merge_Sort(vector<T>&students,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    Merge_Sort(students,low,mid);
    Merge_Sort(students,mid+1,high);
    Merge(students,low,mid,high);
}


void Merge_GPA(vector<Student>&students,int low,int mid,int high){
    vector<Student>temp;
    int left=low,right=mid+1;
    while(left<=mid&&right<=high){
        if(students[left].getGpa()<=students[right].getGpa()){
            temp.push_back(students[left]);
            ++left;
        }
        else {
            temp.push_back(students[right]);
            ++right;
        }

    }
    while(left<=mid){
        temp.push_back(students[left++]);
    }
    while(right<=high) temp.push_back(students[right++]);
    for(int i=low;i<=high;i++){
        students[i]=temp[i-low];
    }


}


void Merge_Sort_GPA(vector<Student>&students,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    Merge_Sort_GPA(students,low,mid);
    Merge_Sort_GPA(students,mid+1,high);
    Merge_GPA(students,low,mid,high);
}


template<class T>
int Partition(vector<T>&students,int low,int high){
    T pivot=students[low];
    int i=low,j=high;
    while(i<j) {
        while (i <= high && students[i] <= pivot) ++i;
        while (j >= low && students[j] > pivot) j--;
        if(i<j) swap(students[i],students[j]);
    }
    swap(students[low],students[j]);
    return j;
}


template<class T>
void Quick_Sort(vector<T>&students,int low,int high){
    if(low<high)
    {
        int Pidx=Partition(students,low,high);
        Quick_Sort(students,low,Pidx-1);
        Quick_Sort(students,Pidx+1,high);
    }
}

int Partition_GPA(vector<Student>&students,int low,int high){
    double pivot=students[low].getGpa();
    int i=low,j=high;
    while(i<j) {
        while (i <= high && students[i].getGpa() <= pivot) ++i;
        while (j >= low && students[j].getGpa() > pivot) j--;
        if(i<j) swap(students[i],students[j]);
    }
    swap(students[low],students[j]);
    return j;
}


void Quick_Sort_GPA(vector<Student>&students,int low,int high){
    if(low<high)
    {
        int Pidxg=Partition_GPA(students,low,high);
        Quick_Sort(students,low,Pidxg-1);
        Quick_Sort(students,Pidxg+1,high);
    }
}

void Count_Sort_GPA(vector<Student>& students) {
    int maxGPA = 0;
    for (const auto& student : students) {
        int gpaInt = static_cast<int>(student.getGpa() * 100);
        if (gpaInt > maxGPA) {
            maxGPA = gpaInt;
        }
    }

    vector<int> freq(maxGPA + 1, 0);
    for (const auto& student : students) {
        int gpaInt = static_cast<int>(student.getGpa() * 100);
        ++freq[gpaInt];
    }

    for (int i = 1; i <= maxGPA; ++i) {
        freq[i] += freq[i - 1];
    }

    vector<Student> output(students.size());
    for (int i = students.size() - 1; i >= 0; --i) {
        int gpaInt = static_cast<int>(students[i].getGpa() * 100);
        output[freq[gpaInt] - 1] = students[i];
        --freq[gpaInt];
    }

    students = output;
}


int main()
{

    ifstream inputFile("students.txt");
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    ofstream fout("SortedByName.txt");
    if(!fout) cout<<"this file does not exist !";
    ofstream fout2("SortedByGPA.txt");
    if(!fout2) cout<<"this file does not exist !";

    int numStudents;
    inputFile >> numStudents;
    inputFile.ignore();

    vector<Student> students;
    for (int i = 0; i < numStudents; ++i) {
        string name, id;
        double gpa;
        getline(inputFile, name);
        getline(inputFile, id);
        inputFile >> gpa;
        inputFile.ignore();
        Student st(id,name,gpa);
        students.push_back(st);
    }

    inputFile.close();

    auto start = high_resolution_clock::now();
    Insertion_Sort(students);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    fout<<"Algorithm: Insertion Sort\n";
    fout << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout << student << '\n';
    }
    fout<<"\n";
    start = high_resolution_clock::now();
    Insertion_Sort_GPA(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout2<<"Algorithm: Insertion Sort\n";
    fout2 << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout2 << student << '\n';
    }
    fout2<<"\n";



    start = high_resolution_clock::now();
    Selection_Sort(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout<<"Algorithm: Selection Sort\n";
    fout << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout << student << '\n';
    }
    fout<<"\n";
    start = high_resolution_clock::now();
    Selection_Sort_GPA(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout2<<"Algorithm: Selection Sort\n";
    fout2 << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout2 << student << '\n';
    }
    fout2<<"\n";

    start = high_resolution_clock::now();
    Bubble_Sort(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout<<"Algorithm: Bubble Sort\n";
    fout << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout << student << '\n';
    }
    fout<<"\n";
    start = high_resolution_clock::now();
    Bubble_Sort_GPA(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout2<<"Algorithm: Bubble Sort\n";
    fout2 << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout2 << student << '\n';
    }
    fout2<<"\n";


    start = high_resolution_clock::now();
    Shell_Sort(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout<<"Algorithm: Shell Sort\n";
    fout << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout << student << '\n';
    }
    fout<<"\n";
    start = high_resolution_clock::now();
    Shell_Sort_GPA(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout2<<"Algorithm: Shell Sort\n";
    fout2 << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout2 << student << '\n';
    }
    fout2<<"\n";


    start = high_resolution_clock::now();
    Merge_Sort(students,0,(int)students.size()-1);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout<<"Algorithm: Merge Sort\n";
    fout << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout << student << '\n';
    }
    fout<<"\n";
    start = high_resolution_clock::now();
    Merge_Sort_GPA(students,0,(int)students.size()-1);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout2<<"Algorithm: Merge Sort\n";
    fout2 << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout2 << student << '\n';
    }
    fout2<<"\n";

    start = high_resolution_clock::now();
    Quick_Sort(students,0,(int)students.size()-1);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout<<"Algorithm: Quick Sort\n";
    fout << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout << student << '\n';
    }
    fout<<"\n";
    start = high_resolution_clock::now();
    Quick_Sort_GPA(students,0,(int)students.size()-1);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout2<<"Algorithm: Quick Sort\n";
    fout2 << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout2 << student << '\n';
    }
    fout2<<"\n";

    start = high_resolution_clock::now();
    Count_Sort_GPA(students);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    fout2<<"Algorithm: Count Sort\n";
    fout2 << "Running Time: " << duration.count() << " milliseconds\n\n" ;
     for (const auto& student : students) {
        fout2 << student << '\n';
    }
    fout2<<"\n";




}
