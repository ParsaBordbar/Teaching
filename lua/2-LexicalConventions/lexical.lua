--[[Identifiers (or names) in Lua can be any string of letters, digits, and 
underscores, not beginning with a digit.
]]
aLongLongNameHere = 'p'

--[[should avoid identifiers starting with an underscore followed by 
one or more upper-case letters they are reserved for special uses in Lua]]
_VERSION = 1

-- _ is reserved anonymous variables.

a = 1
b = 1 * 2 -- The Good 
a = 1 b = 1 * 2 -- Ugly
a = 1; b = 1 * 2 -- The Ugly