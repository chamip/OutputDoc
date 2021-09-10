/*
 * @Author: chamip
 * @Date: 2021-09-10 16:07:43
 * @LastEditTime: 2021-09-10 17:33:29
 * @LastEditors: chamip
 * @Description:
 * @FilePath: /OutputDoc/Golang/exercise-loops-and-function.go
 * 可以输入预定的版权声明、个性签名、空行等
 */
package main

import (
	"fmt"
	"math"
)

func Sqrt(x float64) float64 {
	z := 1.0
	tmp := 0.0
	for math.Abs(z-tmp) > 0.0000001 {
		tmp = z
		z -= (z*z - x) / (2 * z)
	}
	return z
}

func main() {
	fmt.Println(Sqrt(2))
}
