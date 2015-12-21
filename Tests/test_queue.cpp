#include "../Queue_LabWork/TQueue.h"

#include <gtest.h>

TEST(TQueue, can_create_queue_with_positive_length)
{
	ASSERT_NO_THROW(TQueue<int> Q(5));
}

TEST(TQueue, throws_when_create_queue_with_negative_length)
{
	ASSERT_ANY_THROW(TQueue<int> Q(-5));
}

TEST(TQueue, can_create_copied_Queue)
{
	TQueue<int> Q(5);

	ASSERT_NO_THROW(TQueue<int> Q1(Q));
}

TEST(TQueue, can_check_emptyness) {
	TQueue<double> Q(0);
	bool a = true;
	bool b = Q.IsEmpty();
	EXPECT_EQ(a, b);
}

TEST(TQueue, not_full) {
	TQueue<double> Q(2);
	bool a = false;
	bool b = Q.IsFull();
	EXPECT_EQ(a, b);
}

TEST(TQueue, can_push_elements) {
	TQueue<int> Q(15);
	int a=3;
	ASSERT_NO_THROW(Q.Push(a));
}

TEST(TQUEUE, cant_push_in_full_queue) {
	TQueue<int> Q(1);
	double b = 3;
	Q.Push(b);
	ASSERT_ANY_THROW(Q.Push(b));
}

TEST(TQUEUE, can_use_pop) {
	TQueue<int> Q(4);
	int a = 7;
	Q.Push(a);
	a = 0;
	a = Q.Pop();
	EXPECT_EQ(7, a);
}

TEST(TQUEUE, cant_pop_if_empty) {
	TQueue<int> Q;
	ASSERT_ANY_THROW(Q.Pop());
}