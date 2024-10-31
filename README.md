<div class="description user_content enhanced" data-resource-type="assignment.body" data-resource-id="1682350"><h2>Min Heap</h2>
<p>Implement a min heap template using an underlying vector container.</p>
<p>You must implement the functions: insert, extractMin, print and sort (takes in array and sorts it)</p>
<p>Implementation techniques described in <a class="inline_disabled external" href="https://learning-oreilly-com.ezproxy.skylinecollege.edu/library/view/data-structures-the/9781098156602/c07.xhtml#h1-502604c07-0005" target="_blank" rel="noreferrer noopener"><span>Chapter 7 of textbook</span><span class="external_link_icon" style="margin-inline-start: 5px; display: inline-block; text-indent: initial; " role="presentation"><svg viewBox="0 0 1920 1920" xmlns="http://www.w3.org/2000/svg" style="width:1em; height:1em; vertical-align:middle; fill:currentColor">
    <path d="M1226.667 267c88.213 0 160 71.787 160 160v426.667H1280v-160H106.667v800C106.667 1523 130.56 1547 160 1547h1066.667c29.44 0 53.333-24 53.333-53.333v-213.334h106.667v213.334c0 88.213-71.787 160-160 160H160c-88.213 0-160-71.787-160-160V427c0-88.213 71.787-160 160-160Zm357.706 442.293 320 320c20.8 20.8 20.8 54.614 0 75.414l-320 320-75.413-75.414 228.907-228.906H906.613V1013.72h831.254L1508.96 784.707l75.413-75.414Zm-357.706-335.626H160c-29.44 0-53.333 24-53.333 53.333v160H1280V427c0-29.333-23.893-53.333-53.333-53.333Z" fill-rule="evenodd"></path>
</svg>
<span class="screenreader-only">Links to an external site.</span></span></a>.</p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<h2>Pair Programming:</h2>
<p>You may work with a partner to complete the assignment. If you choose to do so, you should submit one solution and include both of your names in a comment at the top of the code.</p>
<p>&nbsp;</p>
<h2>Testing:</h2>
<p>Demonstrate the use of your data structure:</p>
<p>Create minHeap of numbers, demonstrate the insert, print, and extractMin functions. Create and print an array of strings. Use your minHeap sort function to sort it. Print the sorted array.</p>
<p>&nbsp;</p>
<h2>Readability:</h2>
<p>Remember to use good readability practices with meaningful names for variables, functions, and classes.</p>
<p>Add comments explaining design choices, algorithms, and functions' purpose.</p>
<p>Don't have lines longer than 80 characters.</p>
<p>Leave blank lines to break up large blocks of code.</p>
<p>Leave blank lines between implementation of each function.</p>
<p>&nbsp;</p>
<h2>Submission:</h2>
<p>Submit all code files and a screenshot with output from your main function.</p>
<p>Make sure you add a comment with your name at the top of your code file.</p>
<p>&nbsp;</p>
<h2>Grading:</h2>
<table style="table-layout: fixed; font-size: 10pt; font-family: Arial; width: 0px; border-collapse: collapse; border: none;" dir="ltr" border="1" cellspacing="0" cellpadding="0" data-sheets-root="1"><colgroup> <col width="100"> <col width="100"> </colgroup>
<tbody>
<tr style="height: 21px;">
<th style="border-top: 1px solid #000000; border-right: 1px solid transparent; border-bottom: 1px solid #000000; border-left: 1px solid #000000; overflow: visible; padding: 2px 0px 2px 0px; vertical-align: bottom;" scope="col" data-sheets-value="{&quot;1&quot;:2,&quot;2&quot;:&quot;MinHeap Template Rubric&quot;}">
<div style="white-space: nowrap; overflow: hidden; position: relative; width: 196px; left: 3px;">
<div style="float: left;"><span style="font-size: 12pt;">MinHeap Template Rubric</span></div>
</div>
</th>
<th style="border-top: 1px solid #000000; border-right: 1px solid #000000; border-bottom: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom;" scope="col"></th>
</tr>
<tr style="height: 21px;">
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom;" data-sheets-value="{&quot;1&quot;:2,&quot;2&quot;:&quot;insert&quot;}"><span style="font-size: 12pt;">insert*</span></td>
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom; text-align: right;" data-sheets-value="{&quot;1&quot;:3,&quot;3&quot;:8}"><span style="font-size: 12pt;">8</span></td>
</tr>
<tr style="height: 21px;">
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom;" data-sheets-value="{&quot;1&quot;:2,&quot;2&quot;:&quot;extractMin&quot;}"><span style="font-size: 12pt;">extractMin*</span></td>
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom; text-align: right;" data-sheets-value="{&quot;1&quot;:3,&quot;3&quot;:8}"><span style="font-size: 12pt;">8</span></td>
</tr>
<tr style="height: 21px;">
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom;" data-sheets-value="{&quot;1&quot;:2,&quot;2&quot;:&quot;print&quot;}"><span style="font-size: 12pt;">print</span></td>
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom; text-align: right;" data-sheets-value="{&quot;1&quot;:3,&quot;3&quot;:4}"><span style="font-size: 12pt;">4</span></td>
</tr>
<tr style="height: 21px;">
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom;" data-sheets-value="{&quot;1&quot;:2,&quot;2&quot;:&quot;sort&quot;}"><span style="font-size: 12pt;">sort*</span></td>
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom; text-align: right;" data-sheets-value="{&quot;1&quot;:3,&quot;3&quot;:4}"><span style="font-size: 12pt;">4</span></td>
</tr>
<tr style="height: 21px;">
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom;" data-sheets-value="{&quot;1&quot;:2,&quot;2&quot;:&quot;functionality&quot;}"><span style="font-size: 12pt;">functionality</span></td>
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom; text-align: right;" data-sheets-value="{&quot;1&quot;:3,&quot;3&quot;:8}"><span style="font-size: 12pt;">8</span></td>
</tr>
<tr style="height: 21px;">
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom;" data-sheets-value="{&quot;1&quot;:2,&quot;2&quot;:&quot;readability&quot;}"><span style="font-size: 12pt;">readability</span></td>
<td style="border-right: 1px solid #000000; border-bottom: 1px solid #000000; overflow: hidden; padding: 2px 3px 2px 3px; vertical-align: bottom; text-align: right;" data-sheets-value="{&quot;1&quot;:3,&quot;3&quot;:8}"><span style="font-size: 12pt;">8</span></td>
</tr>
</tbody>
</table>
<p>*For full points these functions should be implemented with optimal Big O efficiency.</p>
<p>&nbsp;</p></div>
