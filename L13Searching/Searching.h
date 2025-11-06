#include <array>
#include <vector>
template <typename T, unsigned long N>
int linearSearch(std::array<T, N> arr, T target) {
	for (int i = 0; i < N; i++) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}

template <typename T, unsigned long N>
int linearSearch(std::array<T, N> arr, T target, int k) {
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == target) {
			count++;
			if (count == k) {
				return i;
			}
		}
	}
	if (count == 0) {
		return -1;
	}
	if (count < k) {
		return -2;
	}
}

template <typename T>
int linearSearch(std::vector<T> v, T target) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == target) {
			return i;
		}
	}
	return -1;
}

template <typename T>
int linearSearch(std::vector<T> v, T target, int k) {
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == target) {
			count++;
			if (count == k) {
				return i;
			}
		}
	}
	if (count == 0) {
		return -1;
	}
	if (count < k) {
		return -2;
	}
}

template <typename T, unsigned long N>
int binarySearchFirst(std::array<T, N> arr, T target) {
	int left = 0;
	int right = N - 1;
	int result = -1;  

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == target) {
			result = mid;
			right = mid - 1;
		}
		else if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	return result;
}

template <typename T>
int binarySearchFirst(std::vector<T> arr, T target) {
	int left = 0;
	int right = arr.size() - 1;
	int result = -1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == target) {
			result = mid;
			right = mid - 1;
		}
		else if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	return result;
}