function [ output ] = CorrectDeadZone( input )
    delta_n = -0.02695;
    delta_p = 0.5449;

    if(input > 0)
    {
        output = input + delta_p;
    }else if(input < 0)
    {
        output = input + delta_n;
    }else
    {
        output = input;
    }
   
end

