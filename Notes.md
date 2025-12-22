Delta: How much the option price changes with the underlying asset's price. Also the probability of the option closing in the money.  
Gamma: How much Delta changes with the underlying asset’s price.  
Vega: How much the option price changes with volatility.  
Theta: How much the option price decays as time passes.  
Rho: How much the option price changes with the risk-free interest rate.  

In the Black-Scholes formulas for greeks, you must use the Probability Density Function (PDF), denoted as N'(x).
The Options pricing is calcualted using Cumulative Distribution Function (CDF) N(x). 

The Gaussian error function, denoted as erf(x), calculates the probability that a random variable from a 
normal distribution (with mean 0, std dev 1/√2) falls within the range [-x, x], or more generally, 
it's a special function representing the integral of the Gaussian function from 0 to a given value x.
helping determine the likelihood of errors or values within certain bounds. 

Operator Overloading to allow Straddles of Greek classes 

Assumptions:
1. European Exercise
2. Geometric Brownian Motion
3. Frictionless Market
4. Constant Parameters: 
5. No Arbitrage

Scaled Vega and Rho by 0.01 - (change per 1% vol)
Scaled Theta by 1/365 - (1 day time decay)

