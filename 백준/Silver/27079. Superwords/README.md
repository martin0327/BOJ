# [Silver III] Superwords - 27079 

[문제 링크](https://www.acmicpc.net/problem/27079) 

### 성능 요약

메모리: 2316 KB, 시간: 0 ms

### 분류

그리디 알고리즘, 문자열

### 제출 일자

2026년 1월 18일 10:21:40

### 문제 설명

<p>The cows are playing dictionary games again; there's not much else to do while chewing one's cud.  The new game is a simple one but they need to verify their answers.</p>

<p>Given a list of N (1 ≤ N ≤ 100) words, what is the smallest "superword" that contains all of them, in order, as subwords?  Consider an example using three words: 'big', 'green', and 'engine'.  To make a "superword" (which, regrettably, rarely appears in the dictionary), one combines them carefully to yield: 'bigreengine'.</p>

<p>Words appear sequentially in a superword when the first letter of a constituent word appears strictly later in the superword than the first letter of the previous word and the last letter of that word appears strictly later in the superword than the last letter of the previous word. Here are some two word examples:</p>

<ul>
	<li>sin in -> sinin</li>
	<li>sin sine -> sinsine</li>
	<li>sin int -> sint</li>
</ul>

<p>Your task is to find superwords.</p>

### 입력 

 <ul>
	<li>Line 1: A single integer, N</li>
	<li>Lines 2..N+1:  Each line contains a single word that contains only lower case letters ('a'..'z').  No word is longer than 75 characters.</li>
</ul>

### 출력 

 <p>A single line that contains the "superword".</p>

