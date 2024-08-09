package esbuildmobile

import (
	"log"
	"testing"
)

func TestTransform(t *testing.T) {
	jsx := `
	// import * as React from 'react'
	// import * as ReactDOM from 'react-dom'
	ReactDOM.render(
		<text>Hello World!</text>,
		document.getElementById('root')
	);
	`

	code, err := Transform(jsx, nil)

	if err != nil {
		t.Fatal("could not format jsx: ", err)
	}

	log.Println("transformed string: \n", code)
}
