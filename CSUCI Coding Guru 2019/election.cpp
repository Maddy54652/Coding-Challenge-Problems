#include<iostream>
#include<string>
#include<stdio.h>

//hi Kevin!
using namespace std;

struct Candidate{
  string party;
  double votes;
  int seatsWon;
};

int main(){
  int parties,contested_seats;
  int i = 0;
  int j;
  double *divisors,*biggestNumbers;
  char colon;
  Candidate* allCandidates;
  double** quotientMatrix;
  
  
  cin>>parties;
  cin>>contested_seats;

  divisors = new double[contested_seats];
  for(;i<contested_seats;i++){
    cin>>divisors[i];
  }
  
  allCandidates = new Candidate[parties];

  for(i = 0;i<parties;i++){
    cin>>allCandidates[i].party;
    cin>>allCandidates[i].votes;
  }
  
  quotientMatrix = new double*[parties];

  for(int i = 0;i<parties;i++){
    quotientMatrix[i] = new double[contested_seats];
  }

  for(i = 0;i<contested_seats;i++){
    for(j = 0;j<parties;j++){
      quotientMatrix[j][i] = allCandidates[j].votes/divisors[i];
    }
  }
  
  for(int i = 0;i<parties;i++){
    delete[] quotientMatrix[i];
  }

  delete[] divisors;
  delete[] allCandidates;
  delete[] quotientMatrix;
  return 0;
}
