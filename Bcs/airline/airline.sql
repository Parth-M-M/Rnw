create database if not exists airline ;
use airline ;
select * from airlineroutesdata ;

SELECT 
    RouteCode,
    COUNT(*) AS TotalFlights
FROM airlineroutesdata
GROUP BY RouteCode
ORDER BY TotalFlights DESC
LIMIT 10;

SELECT 
    RouteCode,
    AVG(Revenue) AS AvgRevenue,
    AVG(OperationalCost) AS AvgCost,
    AVG(Revenue - OperationalCost) AS AvgProfit
FROM airlineroutesdata
GROUP BY RouteCode;

SELECT 
    RouteCode,
    AVG(Revenue - OperationalCost) AS AvgProfit
FROM airlineroutesdata
GROUP BY RouteCode
HAVING AVG(Revenue - OperationalCost) < 0;

SELECT 
    RouteCode,
    SUM(SeatsSold) AS TotalSeatsSold,
    SUM(SeatsAvailable) AS TotalSeatsAvailable,
    (SUM(SeatsSold) * 100.0 / SUM(SeatsAvailable)) AS OccupancyPercent
FROM airlineroutesdata
GROUP BY RouteCode;

SELECT
    RouteCode,
    DATE_FORMAT(FlightDate, '%Y-%m') AS Month,   -- For MySQL
    SUM(Revenue - OperationalCost) AS TotalProfit
FROM airlineroutesdata
GROUP BY RouteCode, DATE_FORMAT(FlightDate, '%Y-%m')
ORDER BY Month, RouteCode;

SELECT
    CASE 
        WHEN Origin IN ('BOM','DEL','BLR','HYD','MAA')
         AND Destination IN ('BOM','DEL','BLR','HYD','MAA')
        THEN 'Domestic'
        ELSE 'International'
    END AS RouteType,
    SUM(Revenue) AS TotalRevenue,
    SUM(OperationalCost) AS TotalCost,
    SUM(Revenue - OperationalCost) AS TotalProfit
FROM airlineroutesdata
GROUP BY RouteType;

SELECT 
    RouteCode,
    SUM(Revenue) AS TotalRevenue,
    SUM(FlightDurationMins) AS TotalDuration,
    (SUM(Revenue) / SUM(FlightDurationMins)) AS RevenuePerMinute,
    RANK() OVER (ORDER BY (SUM(Revenue) / SUM(FlightDurationMins)) DESC) AS RouteRank
FROM airlineroutesdata
GROUP BY RouteCode;


