# [Diamond IV] Contention - 23931 

[문제 링크](https://www.acmicpc.net/problem/23931) 

### 성능 요약

메모리: 7404 KB, 시간: 592 ms

### 분류

그리디 알고리즘, 제곱근 분할법

### 제출 일자

2026년 1월 6일 17:24:13

### 문제 설명

<p>You are selling tickets for the front row of seats at a movie theater. The front row has <b>N</b> seats, numbered 1 to <b>N</b> from left to right. You have been out of the office the last week, and upon your return, <b>Q</b> <i>bookings</i> for seats have piled up! The i-th booking requests all the seats from <b>L<sub>i</sub></b> to <b>R<sub>i</sub></b> inclusive. You now have the boring job of entering each booking into the system, one at a time.</p>

<p>Since some of the bookings may overlap, the system might not be able to fulfill each booking entirely. When you enter a booking into the system, it will assign every seat requested by the booking that hasn't already been assigned to a booking entered into the system earlier.</p>

<p>What is the largest integer k where there exists an order that you can enter the bookings into the system, such that each booking is assigned at least k seats?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <b>T</b>. <b>T</b> test cases follow. Each test case starts with a line containing two integers <b>N</b> and <b>Q</b>, the number of seats and the number of bookings, respectively. Then, there are <b>Q</b> more lines, the i-th of which contains the two integers <b>L<sub>i</sub></b> and <b>R<sub>i</sub></b>, indicating that the i-th booking would like to book all the seats from <b>L<sub>i</sub></b> to <b>R<sub>i</sub></b>, inclusive.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is the test case number (starting from 1) and <code>y</code> is the largest value k, as described above.</p>

