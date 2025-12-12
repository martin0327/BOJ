# [Gold I] Transmitter - 26053 

[문제 링크](https://www.acmicpc.net/problem/26053) 

### 성능 요약

메모리: 248944 KB, 시간: 668 ms

### 분류

자료 구조, 문자열, 트리, 트라이, 두 포인터

### 제출 일자

2025년 12월 12일 16:49:34

### 문제 설명

<p>There is one radio transmitter on each floor in the Cimrman Labs main building. The transmitters are going to communicate with Cimrman Lunar Base on the far side of the Moon. Cimrman needs a strong signal, therefore more transmitters will work simultaneously to attain good connection characteristics.</p>

<p>However, for other practical reasons, the working transmitters have to be located in a single block of floors, that is, there should not be any floor with unused transmitter anywhere between other two floors with used transmitters.</p>

<p>Immediately after the start of the transmission, at the beginning of each second, each transmitter sends out also the so-called coordination signal (CoSi) on a particular coordination frequency. A separate sequence of coordination frequencies is given for each transmitter. The transmitter sends out CoSi on i-th frequency in the sequence at the beginning of i-th second. The number of seconds in which CoSi is sent out is equal to the length of the sequence. When the sequence of frequencies is exhausted the transmitter stops sending out CoSi, but it still continues to do its main work.</p>

<p>The transmitters often work in pairs to boost each other performance. The performance quality of a pair of transmitters is equal to the maximum length in seconds of a time interval immediately after the start of the transmission in which both transmitters in the pair send out CoSi on the same frequency. This interval ends when the transmitters in the pair send out a CoSi on different frequencies or when any of them stops sending out CoSi altogether.</p>

<p>When a group of more than two transmitters work together the performance quality is calculated as the sum of performance qualities of all possible pairs of transmitters in the group.</p>

<p>Now, Cimrman wants to choose a group of transmitters located in a contiguous block of floors in such a way that the performance quality of the group is at least a given predefined value K.</p>

<p>Help Cimrman calculate the number of such possible groups of transmitters.</p>

### 입력 

 <p>The first line of input contains two integers N, K (1 ≤ N ≤ 10<sup>6</sup>, 1 ≤ K ≤ 10<sup>9</sup>), the number of transmitters and the predefined performance quality value. Each of the next N lines contains a string of lowercase letters. Each string represents the sequence of CoSi frequencies of a particular transmitter, each letter represents CoSi frequency in one second. The i-th string represents the CoSi frequencies of the transmitter on the i-th floor.</p>

<p>The same letters across the input represent the same frequencies, different letters represent different frequencies. The sum of lengths of all strings is guaranteed to be at most 10<sup>6</sup>.</p>

### 출력 

 <p>Output the number of groups of transmitters which satisfy Cimrman’s demands and have performance quality at least K.</p>

