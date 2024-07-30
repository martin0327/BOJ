# [Gold III] Printed Circuit Board - 3353 

[문제 링크](https://www.acmicpc.net/problem/3353) 

### 성능 요약

메모리: 8300 KB, 시간: 52 ms

### 분류

다이나믹 프로그래밍, 가장 긴 증가하는 부분 수열: O(n log n)

### 제출 일자

2024년 7월 30일 22:57:56

### 문제 설명

<p>In a printed circuit board, conductive wires are laid on a non-conductive board. Because the conductors in the same layer cannot cross without creating short-circuits, boards with conductors divided into several layers separated by non-conductive board material are used in more complex cases. However, boards with more layers are more expensive. So, manufacturers try to allocate the required conductors to layers in a way that minimizes the number of layers needed.</p>

<p>In this task we look at boards where each conductor is connecting two ports located on opposite edges of the board and seek to minimize the cost of such a board.</p>

<p>Consider, for example, the board shown on the left on the figure below. If one conductor has to connect A to B and another D to C, this could be achieved in a single layer, as shown in the middle on the figure. But a conductor connecting A to C and another connecting D to B could not be laid out in the same layer, as can be seen on the right on the figure.</p>

<p style="text-align: center;"><img alt="" src="" style="width: 463px; height: 120px;"></p>

<p>Write a program that is given the locations of the endpoints of the N conductors on a W × H board and determines the minimal number of layers needed to accommodate all of them.</p>

<p>It may be assumed the width of the conductors is very small compared to the distances between the ports. That is, between any two conductors, there is always enough room for a third one.</p>

### 입력 

 <p>The first line of the text file pcb.in contains N (1 ≤ N ≤ 10<sup>5</sup>), the number of connectors. Each of the following N lines contains two integers, X<sub>i1</sub> and X<sub>i2</sub> (0 ≤ X<sub>ij</sub> ≤ 10<sup>6</sup>), separated by a space, meaning that the i-th conductor has to connect the points (X<sub>i1</sub>, 0) and (X<sub>i2</sub>, H). It may be assumed that all the 2 · N endpoints given in the input are distinct.</p>

### 출력 

 <p>The first and only line of the text file pcb.out should contain a single integer, the minimal number of layers needed to accommodate all the required conductors.</p>

