

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


int solution(int N){
    int largest_binary_gap = 0;
    int current_binary_gap = -1; // 아직 binary gap을 만나기 전

    while (N > 0){
        int current_digit = N % 2;
        if (current_digit == 1){
            // 처음으로 1을 만난 경우부터 카운트하기 시작.
            if (current_binary_gap < 0){
                current_binary_gap = 0;
            }
            // max()
            largest_binary_gap = largest_binary_gap < current_binary_gap 
                    ? current_binary_gap : largest_binary_gap;
            // 0으로 초기화한다.
            current_binary_gap = 0;
        }
        else {
            // 만약 카운팅을 시작했다면 현재 binary gap을 증가시킨다.
            if (current_binary_gap >= 0){
                current_binary_gap++;
            }

        }

        // divide by 2
        N /= 2;
    }

    return largest_binary_gap;

}

