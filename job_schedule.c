#include <stdio.h>

struct Job {
    int id;
    int time;
};

void heapify(struct Job a[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    struct Job temp;

    if (left < n && a[left].time > a[largest].time)
        largest = left;

    if (right < n && a[right].time > a[largest].time)
        largest = right;

    if (largest != i) {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}

void heapSort(struct Job a[], int n) {
    int i;
    struct Job temp;

    for (i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (i = n-1; i >= 0; i--) {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, i, 0);
    }
}

int main() {
    struct Job a[20];
    int n, i;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Job ID: ");
        scanf("%d", &a[i].id);
        printf("Enter Execution Time: ");
        scanf("%d", &a[i].time);
    }

    heapSort(a, n);

    printf("\n\nJob Scheduling Order:\n");
    printf("Job ID\tExecution Time\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%d\n", a[i].id, a[i].time);
    }

    printf("\nPress Enter to exit...");
    getchar(); getchar();

    return 0;
}