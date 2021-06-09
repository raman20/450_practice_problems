// https://www.interviewbit.com/problems/maximum-sum-triplet/

function solution(a) {
    let max = 0;
    for (let i = 0; i < a.length; i++) {
        let max1 = 0, max2 = 0;
        for (let j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                max1 = Math.max(max1, a[j]);
            }
        }
        for (let j = i + 1; j < a.length; j++) {
            if (a[j] > a[i]) {
                max2 = Math.max(max2, a[j]);
            }
        }

        if (max1 && max2) {
            max = Math.max(max, max1 + a[i] + max2);
        }
    }
    return max
}