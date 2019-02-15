(defun factorial (n)
  
  (cond
        ((= n 0) 1) ;; Special case, 0! = 1
   
  ((= n 1) 1) ;; Base case, 1! = 1
    
  (t
            ;; Recursive case
     
            ;; Multiply n by the factorial of n - 1.
      
      (* n (factorial (- n 1)))
 )
)
)

(print (factorial 5)) 

;;Luis Eduardo Nah Be