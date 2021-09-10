/*
 * @Author: chamip
 * @Date: 2021-09-10 14:55:45
 * @LastEditTime: 2021-09-10 16:31:14
 * @LastEditors: chamip
 * @Description:
 * @FilePath: /Golang/if-and-else.go
 * 可以输入预定的版权声明、个性签名、空行等
 */

package main

import (
	"fmt"
	"math"
)

func pow(x, n, lim float64) float64 {
	if v := math.Pow(x, n); v < lim {
		return v
	} else {
		fmt.Printf("%g >= %g", v, lim)
		fmt.Println()
	}
	return lim
}

func main1() {
	fmt.Println(
		pow(3, 2, 10),
		pow(3, 3, 20),
	)
}
