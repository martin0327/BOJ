# [Gold III] 엔토피아의 기억강화 - 23280 

[문제 링크](https://www.acmicpc.net/problem/23280) 

### 성능 요약

메모리: 2316 KB, 시간: 12 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2025년 5월 19일 01:17:51

### 문제 설명

<p>엔토피아는 기억력을 강화하기 위해 게임을 하나 하려고 한다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/22a384e5-649c-47f4-a4dd-aab80df76280/-/preview/" style="width: 115px; height: 151px;"></p>

<p>위의 그림과 같이 3×4 칸에 정수가 하나씩 있는 게임판이 하나 있다. 그리고 각 칸을 눌러야 하는 순서가 적혀있는 종이를 엔토피아에게 준다. 그리고 3초 후에 원숭이가 종이를 뻇어간다. 이제 엔토피아는 그걸 잘 기억해서 순서대로 정수를 눌러야 한다.</p>

<p>게임판의 정수를 누를 때는 왼손 엄지나 오른손 엄지를 이용한다. 하나의 칸에 왼손 엄지와 오른손 엄지를 동시에 둘 수도 있다. 그러나, 두 손가락을 동시에 움직일 수는 없다.</p>

<p>엔토피아는 손가락을 움직일 때와 정수를 누를 때마다 체력을 사용한다. 엄지손가락을 어떤 칸에서 다른 칸으로 움직일 때는 두 칸 사이의 거리만큼 체력을 쓴다. 두 칸 사이의 거리는 동서방향 거리 + 남북방향 거리로 정의한다. 어떤 칸을 왼손 엄지로 누를 때는 A의 체력을 사용하고, 오른손 엄지로 누를 때는 B의 체력을 사용한다.</p>

<p>가장 처음에 왼손 엄지는 1번 칸에, 오른손 엄지는 3번 칸에 있다. 정수를 눌러야하는 순서가 입력으로 주어질 때, 엔토피아가 사용하는 최소의 체력을 구해보자.</p>

### 입력 

 <p>첫째 줄에 세 정수 N, A, B가 주어진다. 둘째 줄에는 N개의 정수가 주어지는데, 눌러야하는 정수의 순서를 의미한다.</p>

### 출력 

 <p>게임을 마치는데 사용한 체력의 최솟값을 출력한다.</p>

