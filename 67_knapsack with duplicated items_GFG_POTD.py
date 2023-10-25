class Solution:
    def knapSack(self, num_items, max_weight, values, weights):
        # Create a dynamic programming table to store the maximum value for each weight
        dp_table = [0] * (max_weight + 1)


        # Fill in the dp_table by considering each item
        for weight_capacity in range(1, max_weight + 1):
            for item_index in range(num_items):
                # Check if the current item can be included in the knapsack
                if weights[item_index] <= weight_capacity:
                    # Calculate the value of including the current item
                    included_value = dp_table[weight_capacity - weights[item_index]] + values[item_index]
                    # Update the dp_table with the maximum value
                    dp_table[weight_capacity] = max(dp_table[weight_capacity], included_value)


        # The maximum value achievable with the given constraints
        return dp_table[max_weight]
