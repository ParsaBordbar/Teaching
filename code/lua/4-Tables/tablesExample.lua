imdbRecords = { 8, 8.4, 8.9, 9} --Not an array! or obj

-- Next Two line could be used vise-vers too!
imdbRecords.title = "Better Call Saul"
print(imdbRecords["title"])

sum = 0
for i, s in ipairs(imdbRecords) do 
    sum = sum + s
    mean = sum/4
end
print(mean)
