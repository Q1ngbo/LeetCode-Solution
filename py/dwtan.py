def yanghui(maxR):
   dwRow = 0
   dwCol = 0
   dwTrival = 1

   while dwRow <= maxR:
       dwTrival = 1

       while dwCol <= dwRow:
           print("%5d"%dwTrival, end="")
           dwTrival = dwTrival * (dwRow - dwCol) / (dwCol+1)
           dwCol += 1

       dwRow += 1
       print("")


if __name__ == '__main__':
    yanghui(3)