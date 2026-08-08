# Minimal DSA Roadmap — Placement-Focused (Backend Engineer Track)

**Base sheet:** Striver's A2Z DSA Sheet
**Goal:** Interview-capable, not competitive-programmer. Max pattern coverage, min repetition.
**Total problems:** 96 (Core: 78, Optional: 18)
**Language assumption:** C++ (matches your Striver practice)

---

## How to read each entry

`Problem — [CORE/OPTIONAL] — Difficulty — Main pattern | Secondary pattern`
*Why selected / what to learn.*

---

## 1. Arrays & Hashing (foundation — you've done a lot already)

1. **Two Sum** — CORE — Easy — Hashing
 *Canonical "store-what-you've-seen" hashmap pattern. Root of half the hashing problems on the sheet.*
2. **Set Matrix Zeroes** — CORE — Medium — Arrays | In-place marking
 *You've done this — keep it. Teaches O(1) space trick (marker reuse) — a recurring interview idea.*
3. **Rotate Array** — CORE — Medium — Arrays | Reversal trick
 *Reversal-based rotation is a reusable trick beyond just this problem.*
4. **Rotate Matrix (Image)** — CORE — Medium — Arrays
 *In-place transpose + reverse. Different manipulation skill than array rotation.*
5. **Next Permutation** — OPTIONAL — Medium — Arrays
 *Good "aha" problem but low reuse elsewhere. Skip if tight on time.*
6. **Kadane's Algorithm (Max Subarray Sum)** — CORE — Medium — DP-on-arrays / Greedy
 *One of the most-asked interview problems. Root of a whole DP-on-array family.*
7. **Majority Element (Boyer-Moore)** — CORE — Easy — Voting Algorithm
 *You've done this. Unique O(1)-space trick, worth keeping as a pattern anchor.*
8. **Merge Overlapping Intervals** — CORE — Medium — Sorting | Greedy
 *You've done this. Interval pattern reused across scheduling problems.*
9. **Merge Two Sorted Arrays (no extra space)** — OPTIONAL — Medium — Two Pointers
 *Gap method is a nice trick but rarely re-tested independently.*
10. **Find Duplicate Number** — CORE — Medium — Binary Search | Fast-Slow Pointers (cycle detection)
 *Bridges array problems to cycle-detection (Floyd's), a pattern reused in Linked Lists.*
11. **Count Inversions** — CORE — Hard — Merge Sort application
 *Teaches "augment merge sort to count" — a generalizable divide & conquer trick.*

**Stopping criteria:** After these 11, you should recognize: hashmap-for-seen-values, in-place array tricks, interval merging, and Kadane-style running-max DP. If you can explain *why* Kadane's works without looking it up, move on.

---

## 2. Two Pointers & Sliding Window

12. **3Sum** — CORE — Medium — Two Pointers | Sorting
 *You've done this. Canonical sort + two-pointer + duplicate-skip pattern.*
13. **4Sum** — OPTIONAL — Medium — Two Pointers
 *You've done this — same pattern as 3Sum, generalized. Optional since it's repetition of #12, but cheap to keep since already done.*
14. **Container With Most Water** — CORE — Medium — Two Pointers (greedy shrink)
 *Different two-pointer logic (greedy shrink-from-ends) than 3Sum's search logic.*
15. **Trapping Rain Water** — CORE — Hard — Two Pointers | Prefix Max
 *Very commonly asked. Combines prefix-max thinking with two pointers.*
16. **Longest Substring Without Repeating Characters** — CORE — Medium — Sliding Window | Hashing
 *THE template sliding window problem. Variable-size window with hashmap.*
17. **Max Consecutive Ones III / Longest Subarray with at most K zeros** — CORE — Medium — Sliding Window
 *Teaches shrink-condition variant of sliding window (counting instead of set membership).*
18. **Minimum Window Substring** — CORE — Hard — Sliding Window | Hashing
 *The hardest/most general sliding window template — covers most window problems once mastered.*
19. **Longest Repeating Character Replacement** — OPTIONAL — Medium — Sliding Window
 *Good but structurally close to #17/#18. Keep only if you want more window reps.*

**Stopping criteria:** After #16 and #18, you should be able to write a sliding-window solution from scratch (expand pointer, shrink pointer, condition check) for any "longest/shortest substring/subarray satisfying X" problem. If you can do that cold, stop here — don't chase every window variant.

---

## 3. Prefix Sum (you already have strong intuition here)

20. **Subarray Sum Equals K** — CORE — Medium — Prefix Sum | Hashing
 *You've done this. The canonical prefix-sum + hashmap problem.*
21. **Longest Subarray with Sum Zero** — CORE — Medium — Prefix Sum | Hashing
 *You've done this. Reinforces same pattern with a variant condition (sum==0).*
22. **Subarray with XOR = K** — CORE — Medium — Prefix XOR | Hashing
 *You've done this. Confirms you can transfer prefix-sum logic to XOR — important generalization.*

**Stopping criteria:** After these 3, you fully own the "prefix + hashmap to find subarrays" family. This pattern rarely needs a 4th example — stop here.

---

## 4. Sorting (concepts, not implementation depth)

23. **Merge Sort (implementation)** — CORE — Medium — Divide & Conquer
 *You've done this. Needed for Count Inversions and general D&C fluency — not for interviews directly, but foundational.*
24. **Quick Sort (implementation)** — CORE — Medium — Divide & Conquer | Partitioning
 *Partition logic reused in Quickselect (Kth largest) — worth knowing by hand.*
25. **Kth Largest Element (Quickselect or Heap)** — CORE — Medium — Heap | Quickselect
 *Extremely common interview ask. Do it both via heap and quickselect if time allows.*

**Stopping criteria:** You don't need bubble/selection/insertion sort depth beyond what you've done — those are already solid from your history. Move on once merge/quick sort are comfortable and you know when to reach for each.

---

## 5. Binary Search (high ROI — heavily tested)

26. **Binary Search (basic, on sorted array)** — CORE — Easy — Binary Search
 *Baseline template — must be automatic.*
27. **Search in Rotated Sorted Array** — CORE — Medium — Binary Search (modified)
 *THE most common "binary search on modified structure" interview question.*
28. **Find Minimum in Rotated Sorted Array** — OPTIONAL — Medium — Binary Search
 *Same idea as #27, slightly different target — optional if #27 is solid.*
29. **Search a 2D Matrix** — CORE — Medium — Binary Search on virtual 1D
 *Teaches mapping 2D indices to 1D — a reusable trick.*
30. **Find Peak Element** — CORE — Medium — Binary Search on Answer (unsorted)
 *Bridges to "binary search on answer" — big conceptual jump, frequently tested.*
31. **Aggressive Cows / Book Allocation (Binary Search on Answer)** — CORE — Hard — Binary Search on Answer
 *THE template for "binary search on the answer space" — appears constantly in placement tests (capacity, allocation, minimize-max problems).*
32. **Median of Two Sorted Arrays** — OPTIONAL — Hard — Binary Search
 *Classic but low generalization beyond itself. Optional — good if a company is known to ask it.*

**Stopping criteria:** After #27, #30, and #31 you should recognize any problem that says "minimize the maximum" or "maximize the minimum" as a binary-search-on-answer problem. That recognition is the real skill — stop chasing more BS variants once you have it.

---

## 6. Linked Lists

33. **Reverse a Linked List (iterative + recursive)** — CORE — Easy — Linked List
 *Absolute must — appears as a building block in many other LL problems.*
34. **Detect Cycle in Linked List (Floyd's)** — CORE — Easy/Medium — Fast-Slow Pointers
 *Reuses the fast-slow pattern from Find Duplicate Number (#10) — good pattern transfer moment.*
35. **Find Starting Point of Loop** — CORE — Medium — Fast-Slow Pointers
 *Extension of #34 — teaches the math behind Floyd's, not just the mechanic.*
36. **Merge Two Sorted Linked Lists** — CORE — Easy — Linked List | Two Pointers
 *Building block for merge-sort-on-LL and heap-merge problems.*
37. **Remove Nth Node From End** — CORE — Medium — Two Pointers (gap technique)
 *Classic two-pointer-with-gap trick, distinct from cycle detection.*
38. **Add Two Numbers (Linked List)** — CORE — Medium — Linked List | Simulation
 *Common "simulate arithmetic on LL" pattern, carry handling.*
39. **Copy List with Random Pointer** — CORE — Medium — Hashing | Linked List
 *Teaches hashmap-for-node-mapping — a genuinely different LL trick worth knowing.*
40. **Merge K Sorted Lists** — CORE — Hard — Heap | Divide & Conquer
 *Very common; bridges Linked Lists to Heap usage.*
41. **LRU Cache** — CORE — Medium/Hard — Linked List | Hashing | Design
 *Extremely frequently asked in backend-relevant interviews (cache eviction = real systems concept for you). High value given your backend focus.*

**Stopping criteria:** After these 9, you can handle almost any LL manipulation (reversal, cycle, merge, two-pointer gap) and one design question (LRU). Don't grind more LL problems — this list already over-indexes on LL because it's cheap ROI and ties into your backend interests (caching).

---

## 7. Stack & Queue / Deque

42. **Valid Parentheses** — CORE — Easy — Stack
 *Baseline stack-matching pattern.*
43. **Next Greater Element** — CORE — Medium — Monotonic Stack
 *THE template for monotonic stack — generalizes to a large problem family.*
44. **Daily Temperatures** — OPTIONAL — Medium — Monotonic Stack
 *Same pattern as #43 — optional rep unless you want reinforcement.*
45. **Largest Rectangle in Histogram** — CORE — Hard — Monotonic Stack
 *The hardest and most generalizable monotonic-stack problem — once you get this, most stack problems become easy.*
46. **Min Stack** — CORE — Medium — Stack | Design
 *Common design-style stack question — auxiliary stack trick.*
47. **Sliding Window Maximum** — CORE — Hard — Monotonic Deque
 *The deque analog of monotonic stack — distinct data structure usage, commonly asked.*
48. **Implement Queue using Stacks (or vice versa)** — OPTIONAL — Easy — Stack/Queue
 *Good conceptual exercise, low interview frequency on its own — optional.*

**Stopping criteria:** After #43, #45, and #47 you should recognize "next greater/smaller/max-in-window" as a monotonic stack/deque problem instantly. That's the whole family — stop there.

---

## 8. Recursion & Backtracking

49. **Subsets (Power Set)** — CORE — Medium — Backtracking | Recursion
 *The template for "include/exclude" recursion — root of most backtracking problems.*
50. **Combination Sum** — CORE — Medium — Backtracking
 *Extends #49 with pruning + reuse of elements — important variant.*
51. **Permutations** — CORE — Medium — Backtracking
 *Different recursion shape (swap-based or visited-array) than subset problems.*
52. **N-Queens** — CORE — Hard — Backtracking
 *Classic constraint-satisfaction backtracking — the "placement + prune" template.*
53. **Word Search (Grid Backtracking)** — CORE — Medium — Backtracking | DFS on grid
 *Grid-based backtracking — different flavor than array/set backtracking, connects to graph DFS.*
54. **Sudoku Solver** — OPTIONAL — Hard — Backtracking
 *Great practice but structurally similar to N-Queens' constraint-checking. Optional if time-constrained.*
55. **Rat in a Maze** — OPTIONAL — Medium — Backtracking | DFS on grid
 *Similar to Word Search — optional, skip if #53 is solid.*

**Stopping criteria:** After #49–#53, you should be able to write any backtracking solution using the "choose → explore → un-choose" template, on arrays, grids, or constraint boards. This is one of the highest-ROI topic groups for placements — but 5 solid problems is enough; don't grind 15 backtracking variants.

---

## 9. Trees & BST

56. **Binary Tree Inorder/Preorder/Postorder Traversal (iterative + recursive)** — CORE — Easy — Trees
 *Non-negotiable baseline — must be automatic both ways.*
57. **Level Order Traversal (BFS)** — CORE — Easy/Medium — Trees | Queue
 *Root of most "level-by-level" tree problems.*
58. **Maximum Depth of Binary Tree** — CORE — Easy — Trees | Recursion
 *Simplest example of "compute from children" recursive pattern.*
59. **Diameter of Binary Tree** — CORE — Medium — Trees | Recursion (post-order aggregation)
 *Teaches "return value + update global/outer answer" — a very reusable tree trick.*
60. **Balanced Binary Tree Check** — OPTIONAL — Easy — Trees
 *Same recursion shape as #59 — optional reinforcement.*
61. **Lowest Common Ancestor (Binary Tree)** — CORE — Medium — Trees | Recursion
 *Extremely common interview question; different recursive logic (search both sides).*
62. **Binary Tree Right Side View** — OPTIONAL — Medium — Trees | BFS
 *Nice variant of level-order but not essential if #57 is solid.*
63. **Construct Binary Tree from Inorder + Preorder** — CORE — Medium/Hard — Trees | Recursion + Hashing
 *Common "reconstruct from traversals" pattern — index-mapping trick with hashmap.*
64. **Validate Binary Search Tree** — CORE — Medium — BST | Recursion (range checking)
 *THE core BST-validation pattern (pass min/max bounds down recursion).*
65. **Lowest Common Ancestor in BST** — CORE — Easy — BST
 *Shows how BST property simplifies a general tree problem (#61) — important contrast to learn.*
66. **Kth Smallest Element in BST** — CORE — Medium — BST | Inorder traversal
 *Teaches "inorder traversal of BST = sorted order" — a key BST insight.*
67. **Convert Sorted Array to BST** — OPTIONAL — Easy — BST | Recursion
 *Nice but low differentiation from other BST recursion. Optional.*

**Stopping criteria:** After #56–#59, #61, #63–#66 you can handle traversal, aggregation-style recursion, BST validation, and BST search-property problems. That covers ~90% of tree/BST interview questions. Stop grinding trees once these feel natural.

---

## 10. Heap / Priority Queue

68. **Kth Largest Element in an Array** — CORE — Medium — Heap
 *(Cross-listed with #25 — if you did it via Quickselect, redo conceptually via heap too; only counts once.)*
69. **Top K Frequent Elements** — CORE — Medium — Heap | Hashing
 *Common "count + heap" pattern — combines hashing with heap usage.*
70. **Merge K Sorted Arrays/Lists** — (already covered by #40 — no new problem needed here)
71. **Find Median from Data Stream** — CORE — Hard — Two Heaps
 *The canonical "two heaps" trick (max-heap + min-heap) — very distinct and important pattern.*
72. **Task Scheduler** — OPTIONAL — Medium — Heap | Greedy
 *Good but a bit niche. Optional if you want more heap+greedy exposure.*

**Stopping criteria:** After #69 and #71, you know: "top-K → heap" and "streaming median → two heaps." Those two insights cover almost all heap interview questions. Don't add more heap problems beyond this.

---

## 11. Greedy

73. **Activity Selection / N Meetings in One Room** — CORE — Easy/Medium — Greedy | Sorting
 *The foundational greedy-by-sorting-end-time pattern — very common.*
74. **Jump Game** — CORE — Medium — Greedy
 *Different greedy flavor (reachability tracking) than interval scheduling.*
75. **Gas Station** — OPTIONAL — Medium — Greedy
 *Nice greedy insight but niche; optional.*
76. **Fractional Knapsack** — CORE — Easy/Medium — Greedy | Sorting
 *Classic ratio-based greedy — contrasts nicely with 0/1 Knapsack (DP) later, good for interview discussion ("why greedy works here but not for 0/1").*

**Stopping criteria:** After #73, #74, #76 you should recognize greedy-friendly problems (local optimal choice + proof by exchange argument intuition). Greedy problems are usually not deeply chained — don't over-invest here.

---

## 12. Graphs (core placement requirement)

77. **BFS of Graph** — CORE — Easy — Graphs
 *Baseline traversal — needed before anything else in graphs.*
78. **DFS of Graph** — CORE — Easy — Graphs
 *Baseline traversal, different traversal order implications (used in cycle detection, topo sort).*
79. **Number of Islands (Connected Components on Grid)** — CORE — Medium — Graphs | BFS/DFS on grid
 *Extremely common — grid-as-graph pattern, very placement-relevant.*
80. **Detect Cycle in Undirected Graph** — CORE — Medium — Graphs | BFS/DFS
 *Cycle detection logic — different for undirected vs directed, important distinction.*
81. **Detect Cycle in Directed Graph** — CORE — Medium — Graphs | DFS (recursion stack)
 *Teaches the "recursion stack / visiting state" trick — critical difference from #80.*
82. **Topological Sort (Kahn's BFS + DFS-based)** — CORE — Medium — Graphs | DFS/BFS
 *Very common for scheduling-style problems — highly relevant to backend/build-pipeline thinking too.*
83. **Number of Provinces / Connected Components Count** — OPTIONAL — Medium — Graphs | Union-Find or DFS
 *Good practice but conceptually close to #79. Optional.*
84. **Union-Find (Disjoint Set) — implementation + Number of Provinces** — CORE — Medium — Union-Find
 *Distinct data structure/technique from BFS/DFS — worth knowing independently, appears in Kruskal's MST and cycle detection variants.*
85. **Dijkstra's Algorithm (Shortest Path)** — CORE — Medium/Hard — Graphs | Heap
 *THE weighted shortest-path algorithm — near-mandatory for placement interviews, and genuinely useful for backend/networking context.*
86. **Bellman-Ford Algorithm** — OPTIONAL — Medium — Graphs | DP-like relaxation
 *Good to know conceptually (handles negative weights) but lower priority than Dijkstra for interviews. Optional — read the idea even if you skip coding it.*
87. **Course Schedule (Cycle Detection via Topo Sort application)** — CORE — Medium — Graphs | Topological Sort
 *Direct real-world application of #81/#82 — cements the pattern with a well-known problem framing.*

**Stopping criteria:** After #77–#82, #84, #85, #87 you can handle traversal, connectivity, cycle detection, topological ordering, and shortest paths — this is close to complete graph coverage for placements. Skip MST (Kruskal/Prim) unless a specific company JD mentions it — low frequency for most backend/SDE-1 interviews.

---

## 13. Dynamic Programming (basic — enough to be interview-safe, not exhaustive)

88. **Climbing Stairs / Fibonacci-style DP** — CORE — Easy — DP (1D)
 *The simplest possible DP — teaches memoization vs tabulation vocabulary.*
89. **House Robber** — CORE — Medium — DP (1D)
 *"Take or skip" DP template — extremely reusable shape.*
90. **0/1 Knapsack** — CORE — Medium — DP (2D)
 *THE foundational 2D DP problem — subset-sum, partition, and target-sum problems all derive from this.*
91. **Subset Sum / Partition Equal Subset Sum** — CORE — Medium — DP (2D) | Knapsack variant
 *Direct application of #90 — cements the knapsack pattern with a different question framing.*
92. **Longest Common Subsequence (LCS)** — CORE — Medium — DP (2D, strings)
 *The template for all string-pair DP problems (edit distance, LCS-variants).*
93. **Edit Distance** — CORE — Hard — DP (2D, strings)
 *Extension of LCS-style DP — very commonly asked, cements the 2D string-DP grid pattern.*
94. **Longest Increasing Subsequence (LIS)** — CORE — Medium — DP (1D) | Binary Search optimization
 *Important pattern (O(n²) DP + optional O(n log n) binary-search optimization) — bridges DP back to binary search.*
95. **Coin Change (Minimum Coins)** — CORE — Medium — DP (unbounded knapsack)
 *Unbounded knapsack variant — distinct from 0/1 knapsack (#90), important contrast to know.*
96. **Matrix Chain Multiplication / Palindrome Partitioning (interval DP intro)** — OPTIONAL — Hard — DP (interval)
 *Optional exposure to interval DP — good if time allows, skip without guilt if not. Interval DP is lower-frequency in most SDE-1/backend interviews.*

**Stopping criteria:** After #88–#95 you know: 1D take/skip DP, 2D knapsack DP, 2D string-pair DP, and LIS. That is genuinely enough DP for the large majority of placement interviews (most companies below FAANG-hard-DP-bar rarely go past this). Do NOT chase DP on trees, digit DP, or bitmask DP unless a specific company is known for hard DP rounds.

---

# Final Core List (78 problems)

Arrays/Hashing: 1,2,3,4,6,7,8,10,11
Two Pointers/Sliding Window: 12,14,15,16,17,18
Prefix Sum: 20,21,22
Sorting: 23,24,25
Binary Search: 26,27,29,30,31
Linked List: 33,34,35,36,37,38,39,40,41
Stack/Queue: 42,43,45,46,47
Recursion/Backtracking: 49,50,51,52,53
Trees/BST: 56,57,58,59,61,63,64,65,66
Heap: 68,69,71
Greedy: 73,74,76
Graphs: 77,78,79,80,81,82,84,85,87
DP: 88,89,90,91,92,93,94,95

# Optional List (18 problems)
5, 9, 13, 19, 28, 32, 44, 48, 54, 55, 60, 62, 67, 72, 75, 83, 86, 96

---

# Pattern Coverage Map

| Pattern | Problems | Count | You should recognize afterward |
|---|---|---|---|
| Hashing (seen-value lookup) | 1,20,21,22,39,69 | 6 | Any "have I seen this before / complement" problem → hashmap |
| Two Pointers | 12,14,15,37 | 4 | Sorted-array pair/triplet problems and gap-based LL problems |
| Sliding Window | 16,17,18 | 3 | Any "longest/shortest substring/subarray with condition X" |
| Prefix Sum/XOR | 20,21,22 | 3 | Subarray sum/XOR = K problems |
| In-place Array Tricks | 2,3,4 | 3 | O(1) space manipulation via marking/reversal |
| Binary Search (classic + on answer) | 26,27,29,30,31 | 5 | Modified sorted-array search AND "minimize max / maximize min" problems |
| Fast-Slow Pointers | 10,34,35 | 3 | Cycle detection in arrays/linked lists |
| Linked List manipulation | 33,36,37,38,39,40,41 | 7 | Reversal, merging, arithmetic-on-LL, design (LRU) |
| Monotonic Stack/Deque | 43,45,47 | 3 | Next-greater/smaller and sliding-window-max problems |
| Stack fundamentals | 42,46 | 2 | Matching/validation and auxiliary-stack design |
| Backtracking | 49,50,51,52,53 | 5 | Include/exclude and constraint-placement recursion |
| Tree traversal & recursion | 56,57,58,59,61,63 | 6 | DFS/BFS traversal + "aggregate from children" recursion |
| BST properties | 64,65,66 | 3 | Range-bound validation + inorder=sorted insight |
| Heap | 68,69,71 | 3 | Top-K problems and streaming median (two-heap trick) |
| Greedy | 73,74,76 | 3 | Sort-then-greedy-choice problems |
| Graph traversal & connectivity | 77,78,79,80,81,84 | 6 | BFS/DFS, grid-as-graph, cycle detection, Union-Find |
| Topological Sort | 82,87 | 2 | Dependency/scheduling problems |
| Shortest Path | 85 | 1 | Weighted graph shortest-path via Dijkstra |
| DP (1D) | 88,89,94 | 3 | Take/skip and LIS-style DP |
| DP (2D Knapsack) | 90,91,95 | 3 | Subset-sum/partition/coin-change family |
| DP (2D String) | 92,93 | 2 | LCS/edit-distance grid DP |
| Sorting algorithms & Quickselect | 23,24,25 | 3 | When to use merge vs quick sort; Kth-element via partition |

---

# 4-Month Plan (3 sessions/week, 30–60 min/session ≈ 48 sessions total)

**Month 1 — Arrays, Hashing, Two Pointers, Sliding Window, Prefix Sum (12 sessions)**
- Weeks 1–2: Arrays/Hashing block (#1–11) — you already know most of this; move fast.
- Week 3: Two Pointers + Sliding Window (#12–19)
- Week 4: Prefix Sum (#20–22, quick since you're already strong here) + Sorting/Quickselect (#23–25)

**Month 2 — Binary Search, Linked List, Stack/Queue (12 sessions)**
- Week 5: Binary Search classic + rotated array (#26–29)
- Week 6: Binary search on answer (#30–31) — spend extra time here, it's a big conceptual jump
- Week 7: Linked List basics + fast-slow pointer (#33–38)
- Week 8: Linked List advanced + LRU Cache (#39–41), Stack fundamentals + monotonic stack (#42–47)

**Month 3 — Recursion/Backtracking, Trees, BST (12 sessions)**
- Week 9: Backtracking template problems (#49–53)
- Week 10: Tree traversals + basic recursion on trees (#56–59)
- Week 11: Tree recursion advanced (#61, #63)
- Week 12: BST properties (#64–66)

**Month 4 — Heap, Greedy, Graphs, DP (12 sessions)**
- Week 13: Heap (#68–69, #71) + Greedy (#73–74, #76)
- Week 14: Graph traversal + connectivity (#77–81, #84)
- Week 15: Topo sort + Dijkstra (#82, #85, #87)
- Week 16: DP — 1D and Knapsack (#88–91), then string DP + LIS + coin change if time allows (#92–95) — spill into buffer week if needed

**Buffer:** You have ~4 unscheduled weeks of slack across 4 months (48 sessions vs ~64 available slots at 3/week). Use slack for: Optional list problems, revision of weak patterns, or just skip — don't force it if backend work needs priority.

---

# Stopping Criteria Summary (the most important section)

- **Hashing:** After Two Sum + Subarray Sum K + Top K Frequent → stop. You know the pattern.
- **Two Pointers:** After 3Sum + Container With Most Water → stop unless struggling.
- **Sliding Window:** After Longest Substring Without Repeat + Minimum Window Substring → stop. These two cover fixed and variable window fully.
- **Prefix Sum:** After 3 problems (you already have this) → stop completely, do not add more.
- **Binary Search:** After rotated array + binary-search-on-answer (Aggressive Cows style) → stop. Recognition of "minimize max/maximize min → binary search" is the finish line.
- **Linked List:** After reversal + cycle detection + merge + LRU Cache → stop. LRU is a great note to end on since it's also a real backend concept.
- **Stack/Queue:** After monotonic stack (Next Greater + Histogram) + Sliding Window Maximum → stop.
- **Backtracking:** After Subsets + Combination Sum + Permutations + N-Queens + Word Search → stop. Five problems is genuinely sufficient.
- **Trees/BST:** After traversal + diameter + LCA (both variants) + validate BST + Kth smallest → stop.
- **Heap:** After Top K Frequent + Find Median from Stream → stop. Two heaps insight is the ceiling of what's usually asked.
- **Greedy:** After 3 problems → stop. Greedy rarely rewards depth in interviews below senior level.
- **Graphs:** After BFS/DFS + Islands + both cycle detections + Topo Sort + Union-Find + Dijkstra → stop. Skip MST/Bellman-Ford unless a specific JD calls for it.
- **DP:** After 1D (Climbing Stairs, House Robber) + 2D Knapsack (0/1 Knapsack, Subset Sum) + String DP (LCS, Edit Distance) + LIS + Coin Change → stop completely. Do not attempt digit DP, bitmask DP, or DP-on-trees for placement prep — these are FAANG-hard-round territory, not general SDE-1/backend-role territory.

---

## Final note

This roadmap is intentionally front-loaded toward what you've already practiced (Arrays, Prefix Sum, some Linked List/Graph basics from your DSA sessions) so those sections should move fast. The genuinely new heavy-lifting is in **Binary Search on Answer, Backtracking, Trees/BST, Heaps, and DP** — budget your best-focus sessions there.

Once you finish this list, you are placement-DSA-capable for backend/full-stack SDE-1 roles. At that point, stop doing new DSA topics — shift remaining prep time to: revising these 78 problems' *patterns* (not re-solving), doing 1–2 mock interviews, and going back to Zensho/backend systems work, which is your actual differentiator.
