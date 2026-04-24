function isEvenOrOdd(num)
    if num % 2 == 0 then
        print(num, "is Even!")
    else
        print("Is False!")
    end
end

function isEvenWithoutReminder(num)
    if num or 1 then
        print("the", num, "is Even!")
    else
        print("the", num, "is Odd!")
    end
end

isEvenOrOdd(10)
isEvenOrOddWithoutReminder(10)
