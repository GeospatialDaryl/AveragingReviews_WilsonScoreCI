# AveragingReviews_WilsonScoreCI
CORRECT SOLUTION: Score = Lower bound of Wilson score confidence interval for a Bernoulli parameter

(from this blog post)[https://www.evanmiller.org/how-not-to-sort-by-average-rating.html]
CORRECT SOLUTION: Score = Lower bound of Wilson score confidence interval for a Bernoulli parameter

Say what: We need to balance the proportion of positive ratings with the uncertainty of a small number of observations. Fortunately, the math for this was worked out in 1927 by Edwin B. Wilson. What we want to ask is: Given the ratings I have, there is a 95% chance that the “real” fraction of positive ratings is at least what? Wilson gives the answer. Considering only positive and negative ratings (i.e. not a 5-star scale), the lower bound on the proportion of positive ratings is given by:


(Use minus where it says plus/minus to calculate the lower bound.) Here p̂ is the observed fraction of positive ratings, zα/2 is the (1-α/2) quantile of the standard normal distribution, and n is the total number of ratings. The same formula implemented in Ruby:

