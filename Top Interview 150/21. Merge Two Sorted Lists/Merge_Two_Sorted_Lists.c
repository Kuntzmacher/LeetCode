# include <stdio.h>
# include <string.h>

# define MAX 50

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode *list1, struct ListNode *list2) {
	return 0;
}

int main () {

	char list1_str[MAX*10] = { "\0" };
	char list2_str[MAX*10] = { "\0" };

	fgets( list1_str, MAX*10, stdin );
	fgets( list2_str, MAX*10, stdin );

	struct ListNode list1 = ListNode;
	int list2[MAX];

	int j = 0;
	int size1 = strlen(list1_str);
	int size2 = strlen(list2_str);

	int *p = list1;
	for ( int i=0; i<strlen(list1_str)-1; i++ ) {
		if ( list1_str[i] != ',' ) {
			p.val = list1_str[i] - '0';
			p = p.next;
			size1--;
		}
	}

	/* for ( int i=0; i<strlen(list2_str)-1; i++ ) {
		if ( list2_str[i] != ',' ) {
			list2[j++] = list2_str[i] - '0';
			size2--;
		}
	}

	struct ListNode* listnode = mergeTwoLists(list1, list2); */

	return 0;
}
