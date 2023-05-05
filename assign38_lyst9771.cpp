#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
class Person
{
    private:
        string name;
        int age;
    protected:
        void setName(string n){
            name=n;
        }
        void setAge(int a){
            age=a;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};
class Employee:public Person
{
    private:
        double salary;
    public:
        void setEmployee(string n, int a, double s){
            setName("Haricharan");
            setAge(a);
            salary=s;
        }
        void showEmployee(){
            cout<<"Name: "<<getName();
            cout<<"Age: "<<getAge();
            cout<<"Salary: "<<salary;
        }
};
class Circle
{
    private:
        int radius;
    public:
        void setRadius(int r) { radius=r;}
        int getRadius(){ return radius;}
        float getArea(){ return 3.14*radius*radius;}
};
class ThickCircle:public Circle
{
    private:
        float thickness;
    public:
        void setThickness(int t) { thickness=t;}
        float getThickness(){return thickness;}
        float getArea(){
            return 3.14*((getRadius()+thickness)*(getRadius()+thickness)-getRadius()*getRadius());   
        }
};
class Coordinate{
    private:
        int x,y;
    public:
        void setCoordinate(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        int getx(){ return x;}
        int gety() { return y;}
        float getDistance(){
            return sqrt(x*x+y*y);
        }
        float getDistance(Coordinate C)
        {
            return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
        void showCoordinate()
        {
            cout<<"("<<x<<","<<y<<")";
        }

};
class Shape{
    private:
        string shapeName;
        void setShapeName(string n)
        {
            shapeName=n;
        }
        string getShapeName()
        {
            return shapeName;
        }
};
class StraightLine:public Shape
{
    private:
        Coordinate A,B;
    public:
        void setLine(Coordinate A,Coordinate B)
        {
            this->A=A;
            this->B=B;
        }
        float getDistance()
        {
            return A.getDistance(B);
        }
        void showLine()
        {
            A.showCoordinate();
            B.showCoordinate();
        }
};
class Game
{
    private:
        int A[5];
    public:
        void setScore(int round,int score){
            A[round]=score;
        }
        int getScore(int round){
            return A[round];
        }

};
class GameResult:public Game{
    private:
        int result[5];
    public:
        void setResult(int round,int r) {
            result[round]=r;
        }
        int getResult(int round){
            return result[round];
        }
        int getFinalResult(){
            int s=0;
            for(int i=0;i<5;i++)
                s=s+result[i];
            return s;
        }
};

class Actor{
    private:
        string name;
        int age;
    public:
        void setName(string n){
            name=n;
        }
        void setAge(int a){
            age=a;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }   
};
class TVActor:virtual public Actor
{
    private:
        int tv_projects_count;
    public:
        void setTvProjectsCount(int c)
        {
            tv_projects_count=c;
        }
        int getTvProjectsCount()
        {
            return tv_projects_count;
        }
        void setTvActor(string n,int a, int projects){
                setName(n);
                setAge(a);
                setTvProjectsCount(projects);

        }
        void showTvActor()
        {
            cout<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<getTvProjectsCount();
        }

};
class MovieActor:virtual public Actor
{
    private:
        int movieCount;
    public:
        void setMovieCount(int c){
            movieCount=c;
        }
        int getMovieCount(){
            return movieCount;
        }
        void setMovieActor(string n,int a,int c)
        {
            setName(n);
            setAge(a);
            setMovieCount(c);
        }
        void showMovieActor(){
            cout<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<getMovieCount();
        }
};
class AllScreenActor:public TVActor, public MovieActor
{
    public:
        void setActorData(string n,int a, int tc,int mc){
            setName(n);
            setAge(a);
            setTvProjectsCount(tc);
            setMovieCount(mc);
        }
        void showActorData(){
            cout<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<getTvProjectsCount()<<endl;
            cout<<getMovieCount();
        }
};
