// Tower Of Hanoi.

// This is a very famous problem.
// Condition for solving this problem: - 
// Move one disk at a time.
// No longer disk can be placed over a shorter disk.



#include<iostream>

// The logic of the main function goes as: - 
// We are going to move all (n-1) disk from the source pillar and place it over the used pillar by performing the processes.
// Then we are going to move the last disk left at the source to the destination.
// Then we are going to shift all the disk from the used pillar to the destination pillar.
void tof(int n, char from, char auxillary, char destination)
{
    if(n>0)
    {
        tof((n-1), from, destination, auxillary);
        std::cout<<"Move "<<n<<" from "<<from<<" to "<<destination<<"\n";
        tof((n-1), auxillary, from, destination);
    }
}

int main()
{
    int n;
    std::cout<<"Enter the number of disc = "; 
    std::cin>>n;

    if(std::cin.fail() || n<=0)
    {
        std::cerr<<"Error!!";
        return-1;
    }

    char source, used, destination;
    std::cout<<"Lable the source = "; 
    std::cin>>source;
    std::cout<<"Lable the using pillar = "; 
    std::cin>>used;
    std::cout<<"Lable the destination = "; 
    std::cin>>destination;

    std::cout<<"\nThe method of moving the disk from "<<source<<" to "<<destination<<" is given below.\n";
    tof(n, source, used, destination);

    return 0;
}