Note: Data has been publicly released and can be made avaialble upon request.

The data is organized in two sets. 

```terminal
H2.npy u.npy v.npy w.npy
```

where are 3D arrays with the third dimension as time

and

```terminal
H2_time_*.npy u_time_*.npy v_time_*.npy w_time_*.npy
```

which are 2D arrays marked with four digit stamps for each time.

both have x and y data as

```terminal
X.npy Y.npy
```

which are 2D arrays. The time arrays can be extracted using the `post_data.py` script

```terminal
./post_data path/to/data
```

which will create the `*_time.npy1` arrays. This is included if this is the desired way to navigate the data. 

using 

```terminal
./post_individual.py --data-dir /path/to/data --data H2
```

will post prcoess `H2` array
```terminal
./post_individual.py --data-dir /path/to/data --data u
```
will post process `u` array. And create images that result in the following videos

https://github.com/user-attachments/assets/b370bf7f-7ecf-49b7-a369-04892fc38f1a


