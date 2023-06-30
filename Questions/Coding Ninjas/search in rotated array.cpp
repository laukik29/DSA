int binarysearch(vector<int>& arr, int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int getpivot(vector<int>& arr, int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start;
}

int search(vector<int>& arr, int n, int k) {
    int pivot = getpivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarysearch(arr, pivot, n - 1, k);
    } else {
        return binarysearch(arr, 0, pivot - 1, k);
    }
}
