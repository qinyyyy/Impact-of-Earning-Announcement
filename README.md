# Impact-of-Earning-Announcement
It is the final project of Financial Computing -- a class of NYU MFE, aiming to analyze the impact of earning announcement on stock prices.
The major work of this project are shown below:

    ● Used liburl to retrieve historical price data of Russell 1000 stocks and IWB into memory and parse the retrieved data for dates 
    and adjusted closing prices
    
    ● Sorted all the stocks according to surprise% in ascending order and divide stocks into three groups based on the 1st quarter of 
    2021 earnings announcement
    
    ● Implemented 40 times Bootstrapping (randomly selecting 80 stocks each time) for every group 
    
    ● Created a set of classes and independent functions to calculate AAR, AAR-STD, CAAR, CAAR-STD for each group
    
    ● Generated a gnuplot chart to show averaged CAAR of all groups and analyze the impact the earning releases on stock prices


The flow-chart of this project is:
    ![image](https://user-images.githubusercontent.com/88140638/155587294-db612592-f418-41af-9bae-628d84d93ecb.png)


The graph output is:
    ![image](https://user-images.githubusercontent.com/88140638/155587598-006b2701-c59a-4317-8f2d-78d14e2320f3.png)


The conclusion of the analysis is that the surprise% of earnings has a positive correlation with the cumulative returns 
of stocks. Specifically, the longer days (N) we observe, the stronger the correlation is.
    


