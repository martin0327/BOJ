# [Platinum II] Power Plant - 20995 

[문제 링크](https://www.acmicpc.net/problem/20995) 

### 성능 요약

메모리: 2180 KB, 시간: 0 ms

### 분류

다이나믹 프로그래밍, 트리, 트리에서의 다이나믹 프로그래밍, 트리에서의 전방향 다이나믹 프로그래밍

### 제출 일자

2025년 11월 15일 17:11:34

### 문제 설명

<p>The JOI power plant has N bases numbered from 1 to N. The bases are connected by N − 1 wires. The i-th wire (1 ≤ i ≤ N − 1) connects the base A<sub>i</sub> and the base B<sub>i</sub>, in both directions. We can travel from any base to any other base by passing through some wires.</p>

<p>Each base of the JOI power plant has at most one power generator. Each power generator has a switch. In the beginning, the switch of every power generator is OFF. You are the director of the JOI power plant. You may choose some power generators, and turn the switches of the chosen power generators to ON. (It is allowed to choose nothing.) The power generators have the following properties.</p>

<ul>
	<li>Assume that the bases x, y,z have power generators. Moreover, assume that we can travel from the base x to the base y and from the base y to the base z, in this order, so that we do not pass through the same wire twice. If the switches of the power generators of the base x and the base z are ON, then the power generator of the base y is broken.</li>
	<li>A power generator will be activated if its switch is ON and it is not broken.</li>
</ul>

<p>Finally, you will get rewards from activated power generators. You will get 1 yen for each activated power generator. However, you will also have to pay repair expenses for broken power generators. You will have to pay 1 yen for each broken power generator. The total amount of rewards minus the total amount of repair expenses will be your profit.</p>

<p>Write a program which, given the arrangement of the bases and the wires, and the information of power generators, calculates the maximum of your profit.</p>

### 입력 

 <p>Read the following data from the standard input.</p>

<p>N A<sub>1</sub> B<sub>1</sub> . . . A<sub>N−1</sub> B<sub>N−1</sub> S</p>

<p>Here S is a string of length N representing the power generators of the bases. Each character of S is either <code>0</code> or <code>1</code>. The i-th character (1 ≤ i ≤ N) describes the power generator of the base i. It is <code>0</code> if there is no power generator in the base i. It is <code>1</code> if the base i has a power generator.</p>

### 출력 

 <p>Write one line to the standard output. The output should contain the maximum of your profit when you choose some power generators, and turn all the switches of the chosen power generators to ON.</p>

