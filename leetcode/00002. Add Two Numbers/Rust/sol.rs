// Recursion Based Solution
// Definition for singly-linked list.
// #[derive(PartialEq, Eq, Clone, Debug)]
// pub struct ListNode {
//   pub val: i32,
//   pub next: Option<Box<ListNode>>
// }
// 
// impl ListNode {
//   #[inline]
//   fn new(val: i32) -> Self {
//     ListNode {
//       next: None,
//       val
//     }
//   }
// }
impl Solution {
    pub fn solve(l1: Option<Box<ListNode>>, l2: Option<Box<ListNode>>, carry: i32) -> Option<Box<ListNode>>
    {
        let mut num: i32 = 0;
        if l1 != None && l2 != None {
            num = l1.as_ref().unwrap().val + l2.as_ref().unwrap().val + carry;
            return Some(Box::new(ListNode{val: num%10, next: Self::solve(l1.unwrap().next, l2.unwrap().next, num/10)}));
        }
        else if l1 != None {
            num = l1.as_ref().unwrap().val + carry;
            return Some(Box::new(ListNode{val: num%10, next: Self::solve(l1.unwrap().next, None, num/10)}));
        }
        else if l2 != None {
            num = l2.as_ref().unwrap().val + carry;
            return Some(Box::new(ListNode{val: num%10, next: Self::solve(None, l2.unwrap().next, num/10)}));
        }
        else if carry == 1 {
            return Some(Box::new(ListNode::new(1)));
        }
        return None;
    }

    pub fn add_two_numbers(l1: Option<Box<ListNode>>, l2: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        return Self::solve(l1, l2, 0);
    }
}

// The if-statement could be replaced with a match statement for a more cleaner code
/*
match (l1, l2, carry) {
    (None, None, 0) => None,
    (l1, l2, carry) => {
        let sum = carry
            + l1.as_ref().map_or(0, |node| node.val)
            + l2.as_ref().map_or(0, |node| node.val);

        Some(Box::new(ListNode {
            val: sum % 10,
            next: Self::add_two_numbers_with_carry(
                l1.and_then(|node| node.next),
                l2.and_then(|node| node.next),
                sum / 10,
            ),
        }))
    }
}
*/