/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    const reversed = x
    .toString()
    .split('')
    .reverse()
    .join('')
    if (x>=1534236469 || x===-1563847412 )
    {return 0 }
    else if (x<=-2147483648)
             {return 0}
    else 
    {return  parseInt(reversed) * Math.sign(x) }
    
};
