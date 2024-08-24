# Use an official Ubuntu as a parent image
FROM ubuntu:latest

# Install bash
RUN apt-get update && apt-get install -y bash

# Set bash as the default command
CMD ["bash", "-c", "echo hello nith && bash"]
