def move(n, source, destination, auxiliary):
    if n == 1:
        print(f"Move disk 1 from {source} to {destination}")
    else:
        move(n - 1, source, auxiliary, destination)
        print(f"Move disk {n} from {source} to {destination}")
        move(n - 1, auxiliary, destination, source)

if __name__ == "__main__":
    num_disks = 3
    move(num_disks, 'A', 'C', 'B')
