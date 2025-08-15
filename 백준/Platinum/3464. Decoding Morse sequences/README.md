# [Platinum IV] Decoding Morse sequences - 3464 

[문제 링크](https://www.acmicpc.net/problem/3464) 

### 성능 요약

메모리: 3868 KB, 시간: 108 ms

### 분류

자료 구조, 다이나믹 프로그래밍, 트리, 트라이

### 제출 일자

2025년 8월 16일 02:49:05

### 문제 설명

<p>Before the digital age, the most common "binary" code for radio communication was the <em>Morse code</em>. In Morse code, symbols are encoded as sequences of short and long pulses (called <em>dots</em> and <em>dashes</em> respectively). The following table reproduces the Morse code for the alphabet, where dots and dashes are represented as ASCII characters "." and "-":</p>

<table class="table table-bordered" style="width: 100%;">
	<tbody>
		<tr>
			<th style="width: 6.25%;">A</th>
			<td style="width: 6.25%;"><code>.-</code></td>
			<th style="width: 6.25%;">B</th>
			<td style="width: 6.25%;"><code>-...</code></td>
			<th style="width: 6.25%;">C</th>
			<td style="width: 6.25%;"><code>-.-.</code></td>
			<th style="width: 6.25%;">D</th>
			<td style="width: 6.25%;"><code>-..</code></td>
			<th style="width: 6.25%;">E</th>
			<td style="width: 6.25%;"><code>.</code></td>
			<th style="width: 6.25%;">F</th>
			<td style="width: 6.25%;"><code>..-.</code></td>
			<th style="width: 6.25%;">G</th>
			<td style="width: 6.25%;"><code>--.</code></td>
			<th style="width: 6.25%;">H</th>
			<td style="width: 6.25%;"><code>....</code></td>
		</tr>
		<tr>
			<th>I</th>
			<td><code>..</code></td>
			<th>J</th>
			<td><code>.---</code></td>
			<th>K</th>
			<td><code>-.-</code></td>
			<th>L</th>
			<td><code>.-..</code></td>
			<th>M</th>
			<td><code>--</code></td>
			<th>N</th>
			<td><code>-.</code></td>
			<th>O</th>
			<td><code>---</code></td>
			<th>P</th>
			<td><code>.--.</code></td>
		</tr>
		<tr>
			<th>Q</th>
			<td><code>--.-</code></td>
			<th>R</th>
			<td><code>.-.</code></td>
			<th>S</th>
			<td><code>...</code></td>
			<th>T</th>
			<td><code>-</code></td>
			<th>U</th>
			<td><code>..-</code></td>
			<th>V</th>
			<td><code>...-</code></td>
			<th>W</th>
			<td><code>.--</code></td>
			<th>X</th>
			<td><code>-..-</code></td>
		</tr>
		<tr>
			<th>Y</th>
			<td><code>-.--</code></td>
			<th>Z</th>
			<td><code>--..</code></td>
			<th> </th>
			<td> </td>
			<th> </th>
			<td> </td>
			<th> </th>
			<td> </td>
			<th> </th>
			<td> </td>
			<th> </th>
			<td> </td>
			<th> </th>
			<td> </td>
		</tr>
	</tbody>
</table>

<p>Notice that in the absence of pauses between letters there might be multiple interpretations of a Morse sequence. For example, the sequence <code>-.-..--</code> could be decoded both as <code>CAT</code> or <code>NXT</code> (among others). A human Morse operator would use other context information (such as a language dictionary) to decide the appropriate decoding. But even provided with such dictionary one can obtain multiple phrases from a single Morse sequence.</p>

<p>Write a program which for each data set:</p>

<ul>
	<li>reads a Morse sequence and a list of words (a <em>dictionary</em>).</li>
	<li>computes the number of distinct phrases that can be obtained from the given Morse sequence using words from the dictionary.</li>
	<li>writes the result.</li>
</ul>

<p>Notice that we are interested in <em>full matches</em>, i.e. the complete Morse sequence must be matched to words in the dictionary.</p>

### 입력 

 <p>The first line of the input contains exactly one positive integer d equal to the number of data sets, 1 ≤ d ≤ 20. The data set follow.</p>

<p>The first line of each data set contains a Morse sequence - a nonempty sequence of at most 10 000 characters "<code>.</code>" and "<code>-</code>" with no spaces in between.</p>

<p>The second line contains exactly one integer n, 1 ≤ n ≤ 10 000, equal to the number of words in a dictionary. Each of the following n lines contains one dictionary word - a nonempty sequence of at most 20 capital letters from "<code>A</code>" to "<code>Z</code>". No word occurs in the dictionary more than once.</p>

### 출력 

 <p>The output should consist of exactly d lines, one line for each data set. Line i should contain one integer equal to the number of distinct phrases into which the Morse sequence from the i-th data set can be parsed. You may assume that this number is at most 2·10<sup>9</sup> for every single data set.</p>

