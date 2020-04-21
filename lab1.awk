BEGIN{
count=0;
}
{
if($1=="d")
count++
}
END{
printf("The Total number of packets dropped due to congestion is: %d\n\n",count)
}

