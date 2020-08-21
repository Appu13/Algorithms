#include<stdio.h>

struct process
{
	int pid;
	int bust;
};

// Function to sort the data
void SortData(struct process p[],int n)
{
	int i, j;
	struct process temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < (n - 1 - i); j++)
		{
			if (p[j].bust > p[j + 1].bust)
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

// Function to calculate the waiting time
void FindWaitingTime(struct process p[], int wt[],int n)
{
	// Set the waiting time of first process as 0
	wt[0] = 0;


	for (size_t i = 1; i < n; i++)
	{
		wt[i] = p[i - 1].bust + wt[i - 1];
	}

}


// Function to calculate the turn around time
void FindTurnAroundTime(struct process p[], int wt[], int tat[], int n)
{

	for (size_t i = 0; i < n; i++)
	{
		tat[i] = p[i].bust + wt[i];
	}

}


// Function to calculate and return the total waiting time
int TotalWaitingTime(int wt[], int n)
{
	int s = 0;
	for (size_t i = 0; i < n; i++)
	{
		s += wt[i];

	}

	return s;
}


// Function to calculate and return the total turn around time
int TotalTurnAroundTime(int tat[], int n)
{
	int s = 0;
	for (size_t i = 0; i < n; i++)
	{
		s += tat[i];

	}

	return s;
}




void main()	
{
	int n;
	struct process p[10];
	int wt[10];
	int tat[10];

	// Reciving the input
	printf("Enter the total number of processes: ");
	scanf_s("%d", &n);

	for (size_t i = 0; i < n; i++)
	{
		printf("Enter the %d process id: ", i + 1);
		scanf_s("%d", &p[i].pid);
		printf("Enter the %d bust time: ", i + 1);
		scanf_s("%d", &p[i].bust);
	}


	// Sorting the process in asencding order of bust time
	SortData(p, n);


	// Calculating the waiting time and turn around time
	FindWaitingTime(p, wt, n);
	FindTurnAroundTime(p, wt, tat, n);

	// Displaying the output
	for (int i = 0; i < n; i++)
	{
		printf("\nProcess id: %d  Bust time: %d \n", p[i].pid, p[i].bust);
		printf("Waiting time: %d \nTurn around time: %d", wt[i], tat[i]);
		printf("\n\n");
	}

	printf("Average waiting Time: %.2f", ((float)TotalWaitingTime(wt, n) / n));
	printf("\nAverage Turn around time Time: %.2f", ((float)TotalTurnAroundTime(tat, n) / n));
	printf("\n\n");




}