#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<numeric> // For std::accumulate or other numeric functions if needed

using namespace std;

// This problem is a classic greedy algorithm problem.
// We want to find the maximum total profit that can be obtained from a set of jobs,
// where each job has a deadline and a profit, and each job takes one unit of time.

// Define a Job class to encapsulate job properties: deadline and profit.
class Job {
public:
    int deadline;
    int profit;

    // A constructor is a clean way to initialize the members.
    Job(int d, int p) : deadline(d), profit(p) {}
};

// The main function to calculate the maximum profit using a greedy approach.
// This function implements the standard Job Sequencing with Deadlines algorithm.
int maxProfit(vector<Job> jobs) {
    // Sort jobs in descending order of profit.
    // We use a lambda expression with a capture list (empty here) for the custom comparison.
    sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
        return a.profit > b.profit;
    });

    // Find the maximum deadline to determine the size of our time slot array.
    int max_deadline = 0;
    for (const auto& job : jobs) {
        if (job.deadline > max_deadline) {
            max_deadline = job.deadline;
        }
    }

    // Create a vector to represent time slots. Each slot is a day.
    // We initialize all slots to false, indicating they are empty.
    vector<bool> safeSlots(max_deadline + 1, false);
    int totalProfit = 0;

    // Iterate through the sorted jobs.
    for (const auto& job : jobs) {
        // Find the latest possible time slot for this job.
        // We start from the job's deadline and move backward.
        for (int j = job.deadline; j >= 1; j--) {
            // If the current time slot is available...
            if (safeSlots[j] == false) {
                // ...schedule the job in this slot.
                safeSlots[j] = true;
                // Add the job's profit to the total.
                totalProfit += job.profit;
                // Break the inner loop and move to the next job, as we've scheduled this one.
                break;
            }
        }
    }
    cout << "Maximum profit for jobs: " << totalProfit << endl;
    return totalProfit;
}

int main() {
    int n = 4;
    vector<Job> jobs;

    // Use emplace_back to efficiently construct and add jobs to the vector.
    // This avoids creating temporary Job objects.
    jobs.emplace_back(4, 20); // Job 1: deadline=4, profit=20
    jobs.emplace_back(1, 10); // Job 2: deadline=1, profit=10
    jobs.emplace_back(1, 40); // Job 3: deadline=1, profit=40
    jobs.emplace_back(1, 30); // Job 4: deadline=1, profit=30

    maxProfit(jobs);
    return 0;
}