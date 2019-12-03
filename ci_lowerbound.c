///<summary>
///Returns a rating for the given post.  Larger is better.
///Based on the equation found at http://www.evanmiller.org/how-not-to-sort-by-average-rating.html
///</summary>
public double GetPostRating(int numPositiveVotes, int numNegativeVotes)
{
    int totalVotes = numPositiveVotes + numNegativeVotes;
    if(totalVotes == 0)
        return 0;

    const double z = 1.96; //Constant used for 95% confidence interval in a p-distribution
    double positiveRatio = ((double)numPositiveVotes)/totalVotes;

    //Crazy equation to find the "Lower bound of Wilson score confidence interval for a Bernoulli parameter"
    //Again, see the above webpage
    return (positiveRatio + z*z/(2*totalVotes) - z * Math.sqrt((positiveRatio*(1-positiveRatio)+z*z/(4*totalVotes))/totalVotes))/(1+z*z/totalVotes);
}
