# [Platinum I] 가장 가까운 두 점 2 - 13509 

[문제 링크](https://www.acmicpc.net/problem/13509) 

### 성능 요약

메모리: 44136 KB, 시간: 1164 ms

### 분류

값 / 좌표 압축, 자료 구조, 기하학, 세그먼트 트리, 스위핑

### 제출 일자

2025년 4월 26일 23:00:23

### 문제 설명

<p>두 점 A(x<sub>1</sub>, y<sub>1</sub>)와 B(x<sub>2</sub>, y<sub>2</sub>) 사이의 거리 D(A, B)는 다음과 같이 구한다.</p>

<p>D(A, B) = |x<sub>1</sub> - x<sub>2</sub>| + |y<sub>1</sub> - y<sub>2</sub>|</p>

<p>점 N개 A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>이 주어졌을 때, 각각의 점 A<sub>i</sub>마다 가장 가까운 점 A<sub>j</sub>와의 거리 D(A<sub>i</sub>, A<sub>j</sub>) (i ≠ j)를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄에 N (2 ≤ N ≤ 200,000)이 주어진다. 둘째 줄부터 N개의 줄에는 점 A<sub>i</sub>의 좌표 x와 y가 주어진다. (-10,000,000 ≤ x, y ≤ 10,000,000)</p>

### 출력 

 <p>각각의 점 A<sub>i</sub>마다 가장 가까운 점과의 거리를 출력한다. A<sub>1</sub>부터 A<sub>N</sub>까지 순서대로 한 줄에 하나씩 출력한다.</p>

