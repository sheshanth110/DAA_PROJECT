Server Job Scheduling using Heap Sort
📌 Project Overview

This project demonstrates how Heap Sort can be applied to solve a server job scheduling problem. Each job is assigned an execution time, and the system schedules jobs efficiently by sorting them in ascending order.

The implementation is done in C language, suitable for Design and Analysis of Algorithms (DAA) coursework.

⚙️ How the Program Works
The user inputs the number of jobs.
For each job:
Job ID is entered
Execution time is provided
The program stores all job details in a structure.
Heap Sort is applied:
A max heap is constructed
Elements are sorted using heap operations
Jobs are displayed in ascending order of execution time
🧠 Algorithm Used
Heap Sort
Build Heap: O(n)
Sorting: O(n log n)
Overall Complexity: O(n log n)
▶️ How to Execute the Program
Step 1: Open Terminal in Project Folder

Navigate to the folder where the file is located:
cd path_to_project_folder

Step 2: Compile the Program
gcc job_schedule.c -o job_schedule -mconsole

Step 3: Run the Program
.\job_schedule.exe

📊 Input and Output Details
Input:
Number of jobs
Job ID for each job
Execution time for each job
Output:
Jobs sorted based on execution time

