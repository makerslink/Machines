function m5HexNut( extra )
{
    return cube( { size: [10, 10, 5], center:true } )
	.subtract( cube( { size: [10, 10, 5], center: true } ).translate( [5+4+extra, 0, 0] ) )
	.subtract( cube( { size: [10, 10, 5], center: true } ).translate( [-(5+4+extra), 0, 0] ) )
	.subtract( cube( { size: [10, 10, 5], center: true } ).translate( [5+4+extra, 0, 0] ).rotateZ( 120 ) )
	.subtract( cube( { size: [10, 10, 5], center: true } ).translate( [-(5+4+extra), 0, 0] ).rotateZ( 120 ) )
	.subtract( cube( { size: [10, 10, 5], center: true } ).translate( [5+4+extra, 0, 0] ).rotateZ( 240 ) )
	.subtract( cube( { size: [10, 10, 5], center: true } ).translate( [-(5+4+extra), 0, 0] ).rotateZ( 240 ) );
}

function complete()
{
    return union( 
		 cylinder( { r: 65/2+10, h: 15, center: true } ),
		 cube( { size: [24, 65+20+20, 15], center: true } ),
		 cube( { size: [15, 40, 40], center: true } ).translate( [65/2+10-5/2, 0, 25/2] )
		  )
	.subtract( cylinder( { r: 65/2, h: 20, center: true, fn:1000 } ) )
	.subtract( cylinder( { r: 5/2, h:24, center:true } ).rotateY( 90 ).translate( [0, (65+20+8)/2, 0 ] ) )
	.subtract( cylinder( { r: 5/2, h:24, center:true } ).rotateY( 90 ).translate( [0, -(65+20+8)/2, 0 ] ) )
	.subtract( cylinder( { r: 10/2, h:5, center:true } ).rotateY( 90 ).translate( [-(24-5)/2, (65+20+8)/2, 0 ] ) )
	.subtract( cylinder( { r: 10/2, h:5, center:true } ).rotateY( 90 ).translate( [-(24-5)/2, -(65+20+8)/2, 0 ] ) )
	.subtract( m5HexNut( 0.2 ).rotateZ( 30 ).rotateY( 90 ).translate( [(24-5)/2, (65+20+8)/2, 0 ] ) )
	.subtract( m5HexNut( 0.2 ).rotateZ( 30 ).rotateY( 90 ).translate( [(24-5)/2, -(65+20+8)/2, 0 ] ) )

	.subtract( cylinder( { r: 5/2, h:40, center:true } ).rotateY( 90 ).translate( [65/2, 10, 0 ] ) )
	.subtract( cylinder( { r: 5/2, h:40, center:true } ).rotateY( 90 ).translate( [65/2, -10, 0 ] ) )
	.subtract( cylinder( { r: 10/2, h:15, center:true } ).rotateY( 90 ).translate( [65/2+10-5/2-15+6, 10, 0 ] ) )
	.subtract( cylinder( { r: 10/2, h:15, center:true } ).rotateY( 90 ).translate( [65/2+10-5/2-15+6, -10, 0 ] ) )
	.subtract( cylinder( { r: 5/2, h:40, center:true } ).rotateY( 90 ).translate( [65/2, 10, 25 ] ) )
	.subtract( cylinder( { r: 5/2, h:40, center:true } ).rotateY( 90 ).translate( [65/2, -10, 25 ] ) )
	.subtract( cylinder( { r: 10/2, h:15, center:true } ).rotateY( 90 ).translate( [65/2+10-5/2-15+6, 10, 25 ] ) )
	.subtract( cylinder( { r: 10/2, h:15, center:true } ).rotateY( 90 ).translate( [65/2+10-5/2-15+6, -10, 25 ] ) )
}

function main()
{
    return complete().subtract( cube( { size: [2, 200, 100], center:true } ) )
}