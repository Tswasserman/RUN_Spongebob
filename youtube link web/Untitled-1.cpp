int main() {
    while (true) {
        // Get the current time
        std::time_t t = std::time(nullptr);
        std::tm* now = std::localtime(&t);

        // Print the current time
        std::cout << std::put_time(now, "%T") << '\r' << std::flush;

        // Wait for 1 second (1000 milliseconds)
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    return 0;c
}


